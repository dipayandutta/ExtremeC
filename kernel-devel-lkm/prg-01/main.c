#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int  init_module(void){
	printk(KERN_INFO "Dipayan\n");
	return 0;
}

void cleanup_function(void){
	printk(KERN_INFO "Hello World\n");
	printk(KERN_INFO "Exiting Module\n");
}

module_init(init_module);
module_exit(cleanup_function);
