#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

MODULE_AUTHOR ("xhan0o");
MODULE_DESCRIPTION ("Very simple loadable module");

int init_simple(void){
printk("in init module simple \n");
return 0;
//Change return -1 to return an error
}
void cleanup_simple (void){
printk("in cleanup module simple \n");
}
module_init(init_simple);
module_exit(cleanup_simple);
