#include <stdio.h>
#include <stdlib.h>

//argc: 命令行参数个数   char* argv[]: 命令行参数    char* env[]:环境变量
int main(int argc, char* argv[], char* env[])
{
  int i = 0;
  printf("命令行参数 >\n");
  for(; i < argc; i++)
  {
    printf("argv[%d]:%s\n", i, argv[i]);
  }

  printf("\n环境变量 >\n");
  for(i = 0; env[i] != NULL; i++)
  {
    printf("%s\n",env[i]);
  }

  printf("\ngetenv >\n");
  printf("%s\n",getenv("PATH"));
  return 0;
}
