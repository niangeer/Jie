
//证明了这里的地址不是物理地址，虚拟地址中父子进程访问的数据保存到了不同的物理内存中

#include <stdio.h>
#include <unistd.h>

int g_val = 100;

int main()
{
  pid_t id = fork();
  if(id > 0)
  {
    while(1)
    {
      g_val = 1000;
      printf("f_g_val : %d, g_val addr:%p\n",g_val,&g_val);
      sleep(1);
    }
  }
  else if(0 == id)
  {
    sleep(1);
    while(1)
    {
      printf("c_g_val : %d, g_val addr:%p\n",g_val,&g_val);
      sleep(1);
    }
  }
  else
  {
    printf("fork error\n");
  }

  return 0;
}


