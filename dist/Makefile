all:
	@echo "Creating Debian Package Installer"
	#Update the changelog
	@sed -i s/e20.*/e20\ \(${E_VERSION}\)\ vivid\;\ urgency=low/g debian/DEBIAN/changelog
	cd debian && debuild -S
	#dpkg-deb -b debian e-$(E_VERSION).deb
