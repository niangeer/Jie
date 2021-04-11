#include <stdio.h>
#include <stdlib.h>

int g_val = 100;
int ung_val;
int main(int argc, char* argv[], char* env[])
{
  printf("code addr : %p\n",main);            //代码区
  printf("init addr : %p\n",&g_val);          //初始化数据区
  printf("uninit a_r: %p\n",&ung_val);        //未初始化数据区

  int *tmp = (int*)malloc(sizeof(int));      
  printf("heap addr : %p\n",tmp);             //堆区
  printf("stack addr: %p\n",&tmp);          //栈区

  printf("opt  addr : %p\n",argv[0]);       //命令行参数
  printf("opt  addr : %p\n",argv[argc-1]);

  printf("env  addr : %p\n",env[0]);        //环境变量

  return 0;
}
