//sample file

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jiang");
MODULE_DESCRIPTION("A module sample.");

static int __init hello_init(void){
    printk(KERN_INFO "HELLO WORLD!\n");
    printk(KERN_INFO "103213014\n");
    return 0;
}

static void __exit hello_cleanup(void){
    printk(KERN_INFO "cleaning up module.\n");
    printk(KERN_INFO "Jiang\n");
}

module_init(hello_init);
module_exit(hello_cleanup);

