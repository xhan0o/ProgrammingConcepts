uname -r

ls -l /boot/vmlinux*

head /proc/meminfo

man strace
strace -c date

strace cd /tmp
which cd
file /usr/bin/cd

sleep 100 &
jobs
cd /proc/pid
ls -l
tty

lspci | grep -i ethernet

cd /proc
find . -name ip_forward
cat /proc/sys/net/ipv4/ip_forward
sysctl -a | grep ip_forward

cd /sys/block
ls
ls -l
cd sda
ls
fdisk -l
fdisk -l | grep sda
strace fdisk -l | grep /sys/block
strace fdisk -l |& grep /sys/block
strace fdisk -l |& grep /proc

dmesg | grp -l command
cd /var/log
grep -r "Command line"

ls -l /dev/null
ls -l /dev |grep ^c | grep " 1,"
