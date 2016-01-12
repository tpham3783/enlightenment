
dirs=$(shell ls)
PREFIX=/usr/local



PREFIX_UBUNTU_PACKAGE_DIR=/usr/local/src/enlightenment.source.repo/dist/debian/usr

modules_git = http://git.enlightenment.org/core/efl.git \
	      http://git.enlightenment.org/core/elementary.git \
	      http://git.enlightenment.org/core/evas_generic_loaders.git \
	      http://git.enlightenment.org/core/enlightenment.git \
	      http://git.enlightenment.org/apps/terminology.git

modules = efl elementary evas_generic_loaders enlightenment
#modules = efl elementary evas_generic_loaders enlightenment terminology

E_VERSION=$(shell grep VERSION enlightenment/config.h | grep -v PACK | cut -d' ' -f 3)

help:
	@echo "TARGET              DESCRIPTION"
	@echo "----------------------------------------------------------------------"
	@echo "  bootstrap         Install prerequisites & tools"
	@echo "  pull              Pull the latest source-code for all modules"
	@echo "  e                 Build all modules"
	@echo "  ubuntu_installer  Build & Create a ubuntu .deb release"
	@echo ""
	@echo ""
	@echo "INFLUENTAL ENV VARIABLES"
	@echo "----------------------------------------------------------------------"
	@echo "PREFIX              Where to install the binaries. Use /usr or /usr/local"
	@echo "                    Default is: $(PREFIX)"
	@echo ""
	@echo ""
	@echo "Please run with one of the target names from above"

	
	
prerequisite:
	sudo apt-get install build-essential \
libasound2 libbluetooth3 libc6 libpam0g libxcb-keysyms1 libxcb-shape0 libxcb1 \
libvlc5 libdbus-1-3 libfontconfig1 libfreetype6 libfribidi0 libgcc1 libgif4 \
libgl1-mesa-glx libglib2.0-0 libgstreamer-plugins-base1.0-0 libgstreamer1.0-0 \
libharfbuzz0b libjpeg8 libluajit-5.1-2 libmount1 libpng12-0 \
libpulse0 libsndfile1 libssl1.0.0 libstdc++6 libtiff5 libudev1 libwebp5 \
libx11-6 libxcomposite1 libxcursor1 libxdamage1 libxext6 libxfixes3 libxi6 \
libxinerama1 libxp6 libxrandr2 libxrender1 libxss1 libxtst6 zlib1g \
libfreetype6 libgcc1 libluajit-5.1-2 libpng12-0 libcairo2 libglib2.0-0 \
librsvg2-2 libspectre1 zlib1g autopoint doxygen \
check libssl-dev libjpeg-dev luajit libluajit-5.1-dev libfreetype6-dev \
libfontconfig1-dev libfribidi-dev libx11-dev libcogl-gles2-dev \
libgif-dev libtiff5-dev libgstreamer-plugins-base1.0-dev libdbus-1-dev \
libmount-dev libblkid-dev libpulse-dev libsndfile1-dev libxinerama-dev \
x11proto-print-dev libXp-dev libxrender-dev libxrandr-dev libxfixes-dev \
libxdamage-dev libxcursor-dev libxcomposite-dev libxss-dev libxp-dev \
libxext-dev libxkbfile-dev libxtst-dev libxcb1-dev libxcb-shape0-dev \
libxcb-keysyms1-dev libbullet-dev vlc libvlc-dev autoconf libtool
	
	
bootstrap: prerequisite
	@echo "TODO: initialize all git repos"
	@$(foreach mod, $(modules_git), $(shell git clone $(mod) || echo ""));
	
	
pull:
	@$(foreach module, $(modules), $(shell cd $(module) && git pull));
	
e: 
	@echo "Building enlightenment from git repo"
	@echo "Installation path: $(PREFIX)"
	@sleep 5;
	@mkdir -p ${PREFIX}
	
	cd efl && ./configure --prefix=$(PREFIX) && make -j8 && make install-strip
	cd elementary && ./configure --prefix=$(PREFIX) && make -j8 && make install-strip
	cd enlightenment && ./configure --prefix=$(PREFIX) && make -j8 && make install-strip
	cd terminology && ./configure --prefix=$(PREFIX) && make -j8 && make install-strip
	install dist/enlightenment.desktop dist/debian/usr/share/xsessions/enlightenment.desktop
	@echo "Finish & enjoy!"

ubuntu_installer: 
	
	export CFLAGS="-O3 -ffast-math -march=native"
	export PREFIX=$(PREFIX_UBUNTU_PACKAGE_DIR)
	export PATH=$(PREFIX)/bin:$(PATH)
	#export PKG_CONFIG_PATH=$(PREFIX)/lib/pkgconfig:$(PKG_CONFIG_PATH)
	#export LD_LIBRARY_PATH=$(PREFIX)/lib:$(LD_LIBRARY_PATH)
	@echo "Building a ubuntu release of e19 trunk"
	@echo "Install to: $(PREFIX)"
	@sleep 8;
	rm -rf dist/debian/usr
	mkdir -p ${PREFIX}
	cd efl && ./configure --prefix=$(PREFIX_UBUNTU_PACKAGE_DIR) && make -j8 && make install
	cd elementary && ./configure --prefix=$(PREFIX_UBUNTU_PACKAGE_DIR) && make -j8 && make install
	cd terminology && ./configure --prefix=$(PREFIX_UBUNTU_PACKAGE_DIR) && make -j8 && make install
	cd enlightenment && ./configure --prefix=$(PREFIX_UBUNTU_PACKAGE_DIR) && make -j8 && make install
	cd evas_generic_loaders && ./configure --prefix=$(PREFIX_UBUNTU_PACKAGE_DIR) && make -j8 && make install
	install dist/enlightenment.desktop dist/debian/usr/share/xsessions/enlightenment.desktop
	make update_version
	cd dist && make && echo "Create package at dist/e19.deb"
	
	
update_version:
	@echo "Updating package version to reflect Ubuntu pkg version: ${E_VERSION}"
	@sed -i s/Version.*/Version:\ ${E_VERSION}/g dist/debian/DEBIAN/control
clean: 
	rm dist/e19.deb
	rm -rf dist/debian/usr
	
