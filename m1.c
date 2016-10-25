#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/version.h>
#include<linux/init.h>

void fact(unsigned int x)
 {
  int n=x;
  int fsum=1;
  while(x)
   {
    fsum*=x;
     x=x-1;
     }
   printk("factorial of %d! = %d\n",n,fsum);
  }
EXPORT_SYMBOL_GPL(fact);
int m_init(void)
 {
  printk("module inserted\n");
  printk("Factorial from module1\n");
  fact(5);
  return 0;
  }
void m_exit(void)
 {
  printk("module removed\n");
  }


module_init(m_init);
module_exit(m_exit);

MODULE_AUTHOR("ANAND");
MODULE_DESCRIPTION("module1");
MODULE_LICENSE("GPL");
