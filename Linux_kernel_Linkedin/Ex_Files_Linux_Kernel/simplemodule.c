#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

MODULE_AUTHOR ("xhan0o");
MODULE_DESCRIPTION ("Very simple loadable module");

static int number = 175;
static char *word = "hexAF";
module_param (number, int, S_IRUGO);
module_param (word, charp, S_IRUGO);
MODULE_PARM_DESC (number, "A simple int modifiable parameter");
MODULE_PARM_DESC (word, "A simple string modifiable parameter");

int init_simple(void){
printk("number = %d , word = %s \n",number,word);
return 0;
//Change return -1 to return an error
}
module_init(init_simple);

void cleanup_simple (void){
printk("in cleanup module simple \n");
}
module_exit(cleanup_simple);
