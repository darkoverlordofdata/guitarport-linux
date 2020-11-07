#include <linux/module.h>     /* Needed by all modules */
#include <linux/kernel.h>     /* Needed for KERN_INFO */
#include <linux/init.h>       /* Needed for the macros */

MODULE_LICENSE("BSD");
MODULE_AUTHOR("darkoverlordofdata");
MODULE_DESCRIPTION("GuitarPort USB Driver");
MODULE_VERSION("0.1");

static int __init guitarport_start(void)
{
    printk(KERN_INFO "Loading GuitarPort USB Driver\n");
    printk(KERN_INFO "Hello GuitarPort\n");
    return 0;
}

static void __exit guitarport_end(void)
{
    printk(KERN_INFO "Goodbye GuitarPort\n");
}

module_init(guitarport_start);
module_exit(guitarport_end); 

