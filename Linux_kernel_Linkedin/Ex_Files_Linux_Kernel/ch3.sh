1. Write module C file
2. Make module
3. insert module
4. check dmesg
5. remove module

cat simplemodule.c
make simplemodule.c
insmod ./simplemodule.ko
lsmod | head
dmesg | tail
rmmod simplemodule
lsmod | head
dmesg | tail

Error return on module loading
refer commented code in simplemodule.c

modinfo -a ./simplemodule.ko
modinfo -d ./simplemodule.ko

See versions of simplemodule.c file
modinfo -p ./simplemodule.ko
