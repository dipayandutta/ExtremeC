#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("....");
MODULE_DESCRIPTION("....");
MODULE_VERSION("....");

static int __init mylkm_init(void){
	printk(KERN_INFO "Dipayan\n");
	return 0;
}

static void __exit mylkm_exit(void){
	printk(KERN_INFO "Hello World\n");
	printk(KERN_INFO "Exiting Module\n");

}

module_init(mylkm_init);
module_exit(mylkm_exit);
