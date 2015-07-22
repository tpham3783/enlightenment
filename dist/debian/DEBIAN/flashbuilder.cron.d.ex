#
# Regular cron jobs for the flashbuilder package
#
0 4	* * *	root	[ -x /usr/bin/flashbuilder_maintenance ] && /usr/bin/flashbuilder_maintenance
