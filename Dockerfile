FROM debian:11

WORKDIR /root/

RUN cat <<-EOF > /etc/apt/sources.list
deb http://mirrors.163.com/debian/ bullseye main contrib 
deb http://mirrors.163.com/debian/ bullseye-updates main contrib
EOF

RUN apt update && apt upgrade -y

RUN apt install -y locales vim git wget tree bd figlet file \
		mtd-utils build-essential \
		lib32z1 make cmake gcc-multilib \
		avrdude sdcc  python3-pip \
		&& pip3 install pyserial

ADD z.tar.gz /opt
ADD fengming.d.tar.gz  /etc
ADD Hex2bin-2.5.tar.bz2 /usr/share/
ADD stcflash.tar.gz /root

RUN cat <<-EOF >> .bashrc
export LANG=en_US.UTF-8

if [ -f /etc/fengming.d/mybashrc  ];then
    . /etc/fengming.d/mybashrc
fi
EOF

RUN cp /etc/locale.gen /etc/locale.gen.bak;\
		echo 'en_US.UTF-8 UTF-8' > /etc/locale.gen;\
		locale-gen
ENV PATH=$PATH:/usr/share/Hex2bin-2.5

CMD ["/bin/bash"]
