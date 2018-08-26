Custom GRUB entry

cd /etc/grub.d
ls
cat 40_custom
#replace 40_custom with new file
grub2-mkconfig -o /etc/grub2.cfg
reboot

Override init

#'e' to edit
init = /bin/bash
#press ctrl+x to continue boot
#GUI will fail to load
rdinit = /bin/sh
#fast load but not many filesys will load

pstree | head
pstree -H1 -p | more

which init
ls -l /usr/sbin/init
file /usr/lib/systemd/systemd
