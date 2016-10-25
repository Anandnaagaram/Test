#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/version.h>
#include<linux/init.h>
void my_func(void);


void fact(unsigned int x);
int mod_init(void)
 {
  printk("module2 inserted\n");
  printk("Fact from module2 \n");
  fact(6);
  my_func();
  return 0;
  }
void mod_exit(void)
 {
  printk("module2 removed\n");
 }
 
module_init(mod_init);
module_exit(mod_exit);

MODULE_AUTHOR("ANAND");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MODULE3");
