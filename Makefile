init:
	cd ..
	rm -rf .setup
	git clone https://github.com/caxapok1python/school-setup .setup
	cd .setup
	make
	sudo dpkg -i kumir_2.1.0_amd64.deb
