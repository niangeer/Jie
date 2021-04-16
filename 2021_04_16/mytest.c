#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#define SIZE 32
#define NUM 16

int main()
{
  char cmd[SIZE] = {'\0'};
  const char* cmd_line = "myShell@VM-0-9-centos shell]$ ";

  while(1)
  {
    //打印命令提示符
    printf("%s",cmd_line);
    //获取用户输入的文本
    fgets(cmd, SIZE, stdin);
    cmd[strlen(cmd)-1] = '\0'; //将回车带来的字符消除
  
    //解析文本
    char* args[NUM];
    args[0] = strtok(cmd, " ");
    int index = 1;
    do{
      args[index] = strtok(NULL," ");
      if(NULL == args[index])
      {
        break;
      }
      index++;
    }while(1);
  
    //创建子进程，进行进程替换
    pid_t id = fork();
    if(id < 0)
    {
      printf("fork error\n");
      continue;
    }
    if(0 == id)
    {
      execvp(args[0],args);  //调用成功没有返回值，调用失败返回-1，但这里未接收
      exit(1);               //若未调用成功，则用这里的退出码
    }
    
    //父进程等待
    int st = 0;
    pid_t ret = waitpid(id, &st, 0);
    if(ret > 0)
    {
      if(st & 0x7f)
      {
        printf("-bash: %s: command not found\n",args[0]);
      }
      else
      {
        printf("%d\n",(st>>8)&0xff);
      }
    }
    else
    {
      printf("wait error\n");
    }
  }
  return 0;
}
