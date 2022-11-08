init:
	sudo passwd -q admadmin < admpass
	sudo useradd -m student
	sudo passwd -q student < studpass
	sudo apt install -y gdb wget vim tree
	git clone https://github.com/longld/peda.git ~/.peda
	echo "source ~/.peda/peda.py" >> ~/.gdbinit
	sudo apt install -y python3 python python3-pip python3.9
	sudo apt install -y build-essential
