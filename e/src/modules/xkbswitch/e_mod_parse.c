#include "e.h"
#include "e_mod_parse.h"

Eina_List *layouts = NULL;
Eina_List *models = NULL;
Eina_List *optgroups = NULL;

static const char *rules_file = NULL;

static int layout_sort_cb(const void *data1, const void *data2);

void
find_rules(void)
{
   int i = 0;
   const char *lstfiles[] = {
#ifdef XKB_BASE
      XKB_BASE "/rules/xorg.lst",
      XKB_BASE "/rules/xfree86.lst",
#endif
#if defined __NetBSD__
      "/usr/X11R7/lib/X11/xkb/rules/xorg.lst",
#elif defined __OpenBSD__
      "/usr/X11R6/share/X11/xkb/rules/base.lst",
#endif
      "/usr/share/X11/xkb/rules/xorg.lst",
      "/usr/share/X11/xkb/rules/xfree86.lst",
      "/usr/local/share/X11/xkb/rules/xorg.lst",
      "/usr/local/share/X11/xkb/rules/xfree86.lst",
      "/usr/X11R6/lib/X11/xkb/rules/xorg.lst",
      "/usr/X11R6/lib/X11/xkb/rules/xfree86.lst",
      "/usr/local/X11R6/lib/X11/xkb/rules/xorg.lst",
      "/usr/local/X11R6/lib/X11/xkb/rules/xfree86.lst",
      NULL
   };

   for (; lstfiles[i]; i++)
     {
        FILE *f = fopen(lstfiles[i], "r");
        if (f)
          {
             fclose(f);
             rules_file = lstfiles[i];
             break;
          }
     }
}

int
parse_rules(void)
{
   char buf[4096];
   E_XKB_Model *model = NULL;
   E_XKB_Layout *layout = NULL;
   E_XKB_Option *option = NULL;
   E_XKB_Variant *variant = NULL;
   E_XKB_Option_Group *group = NULL;
   FILE *f;

   if (!rules_file) return 0;

   layouts = NULL;
   models = NULL;

   f = fopen(rules_file, "r");
   if (!f) return 0;

   /* move on to next line, the first one is useless */
   if (!fgets(buf, sizeof(buf), f)) goto err;

   /* let X decide on this one, also serves as
    * "fallback on global" for layout combinations
    */
   model = E_NEW(E_XKB_Model, 1);
   model->name = eina_stringshare_add("default");
   model->description = eina_stringshare_add("Automatic");
   models = eina_list_append(models, model);

   model = E_NEW(E_XKB_Model, 1);
   model->name = eina_stringshare_add("evdev");
   model->description = eina_stringshare_add("evdev");
   models = eina_list_append(models, model);

   /* read models here */
   for (;; )
     {
        if (fgets(buf, sizeof(buf), f))
          {
             char *n, *p, *tmp, *txt;

             n = strchr(buf, '\n');
             if (n) *n = '\0';

             /* means end of section */
             if (eina_strlen_bounded(buf, 3) < 2) break;
             /* get rid of initial 2 spaces here */
             p = buf + 2;
             tmp = strdup(p);

             model = E_NEW(E_XKB_Model, 1);
             model->name = eina_stringshare_add(strtok(tmp, " "));

             free(tmp);

             p += strlen(model->name);
             while (p[0] == ' ')
               ++p;

             txt = evas_textblock_text_markup_to_utf8(NULL, p);
             model->description = eina_stringshare_add(txt);
             E_FREE(txt);

             models = eina_list_append(models, model);
          }
        else
          break;
     }

   /* move on again */
   if (!fgets(buf, sizeof(buf), f)) goto err;

   /* read layouts here */
   for (;; )
     {
        if (fgets(buf, sizeof(buf), f))
          {
             char *n, *p, *tmp, *txt;

             n = strchr(buf, '\n');
             if (n) *n = '\0';

             if (eina_strlen_bounded(buf, 3) < 2) break;

             p = buf + 2;
             tmp = strdup(p);

             layout = E_NEW(E_XKB_Layout, 1);
             layout->name = eina_stringshare_add(strtok(tmp, " "));

             free(tmp);

             p += strlen(layout->name);
             while (p[0] == ' ')
               ++p;

             variant = E_NEW(E_XKB_Variant, 1);
             variant->name = eina_stringshare_add("basic");
             variant->description = eina_stringshare_add("Default layout variant");

             txt = evas_textblock_text_markup_to_utf8(NULL, p);
             layout->description = eina_stringshare_add(txt);
             E_FREE(txt);
             layout->variants = eina_list_append(layout->variants, variant);

             layouts = eina_list_append(layouts, layout);
          }
        else
          break;
     }

   /* move on again */
   if (!fgets(buf, sizeof(buf), f)) goto err;

   /* read variants here */
   for (;; )
     {
        if (fgets(buf, sizeof(buf), f))
          {
             char *n, *p, *tmp, *tok, *txt, *c;

             n = strchr(buf, '\n');
             if (n) *n = '\0';

             if (eina_strlen_bounded(buf, 3) < 2) break;

             p = buf + 2;
             tmp = strdup(p);

             variant = E_NEW(E_XKB_Variant, 1);
             variant->name = eina_stringshare_add(strtok(tmp, " "));

             tok = strtok(NULL, " ");
             c = strchr(tok, ':');
             if (c)
               *c = '\0';

             layout = eina_list_search_unsorted(layouts, layout_sort_by_name_cb, tok);
             layout->variants = eina_list_append(layout->variants, variant);

             p += strlen(variant->name);
             while (p[0] == ' ')
               ++p;
             p += strlen(tok);
             p += 2;

             free(tmp);

             txt = evas_textblock_text_markup_to_utf8(NULL, p);
             variant->description = eina_stringshare_add(txt);
             E_FREE(txt);
          }
        else
          break;
     }

   /* move on again */
   if (!fgets(buf, sizeof(buf), f)) goto err;

   /* read options here */
   for (;; )
     {
        if (fgets(buf, sizeof(buf), f))
          {
             char *n, *p, *t, *tmp, *name, *txt;

             n = strchr(buf, '\n');
             if (n) *n = '\0';

             if (eina_strlen_bounded(buf, 3) < 2) break;

             p = buf + 2;
             tmp = strdup(p);
             name = strtok(tmp, " ");

             p += strlen(name);
             while (p[0] == ' ')
               ++p;

             /* skip "grp" options for switching kbd layouts */
             //if (strncmp(name, "grp", 3))
             {
                if (!strchr(name, ':'))
                  {
                     group = E_NEW(E_XKB_Option_Group, 1);

                     /* A hack to get it to parse right if
                      * the group name contains a space
                      */
                     t = strstr(p, "  ");
                     if (t)
                       {
                          while (t[0] == ' ')
                            ++t;
                          p = t;
                       }

                     txt = evas_textblock_text_markup_to_utf8(NULL, p);
                     group->description = eina_stringshare_add(txt);
                     E_FREE(txt);

                     optgroups = eina_list_append(optgroups, group);
                  }
                else if (group)
                  {
                     option = E_NEW(E_XKB_Option, 1);
                     option->name = eina_stringshare_add(name);
                     txt = evas_textblock_text_markup_to_utf8(NULL, p);
                     option->description = eina_stringshare_add(txt);
                     E_FREE(txt);
                     group->options = eina_list_append(group->options,
                                                       option);
                  }
             }

             free(tmp);
          }
        else
          break;
     }

err:
   fclose(f);

   /* Sort layouts */
   layouts =
     eina_list_sort(layouts, eina_list_count(layouts), layout_sort_cb);
   return 1;
}

void
clear_rules(void)
{
   E_XKB_Option_Group *og;
   E_XKB_Variant *v;
   E_XKB_Option *o;
   E_XKB_Layout *la;
   E_XKB_Model *m;

   EINA_LIST_FREE(layouts, la)
     {
        eina_stringshare_del(la->name);
        eina_stringshare_del(la->description);

        EINA_LIST_FREE(la->variants, v)
          {
             eina_stringshare_del(v->name);
             eina_stringshare_del(v->description);

             E_FREE(v);
          }

        E_FREE(la);
     }

   EINA_LIST_FREE(models, m)
     {
        eina_stringshare_del(m->name);
        eina_stringshare_del(m->description);

        E_FREE(m);
     }

   EINA_LIST_FREE(optgroups, og)
     {
        eina_stringshare_del(og->description);

        EINA_LIST_FREE(og->options, o)
          {
             eina_stringshare_del(o->name);
             eina_stringshare_del(o->description);

             E_FREE(o);
          }

        E_FREE(og);
     }

   optgroups = NULL;
   layouts = NULL;
   models = NULL;
}

static int
layout_sort_cb(const void *data1, const void *data2)
{
   const E_XKB_Layout *l1, *l2;

   if (!(l1 = data1)) return 1;
   if (!l1->description) return 1;
   if (!(l2 = data2)) return -1;
   if (!l2->description) return -1;

   return strcmp(l1->description, l2->description);
}

int
layout_sort_by_name_cb(const void *data1, const void *data2)
{
   const E_XKB_Layout *l1 = NULL;
   const char *l2 = NULL;

   if (!(l1 = data1)) return 1;
   if (!l1->name) return 1;
   if (!(l2 = data2)) return -1;

   return strcmp(l1->name, l2);
}

