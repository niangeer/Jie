#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
  while(1)
  {
    pid_t id = fork();
    
    if(id < 0)
    {
      printf("fork error!\n");
      return 1;
    }

    if(0 == id)
    {
      //child替换的是子进程，因为进程的独立性，所以，父进程是不受影响的
      sleep(2);
      execl("/usr/bin/ls","ls","-a","-l",NULL);
      exit(1);
    }

    //father
    pid_t ret = waitpid(id, NULL, 0);
    if(ret > 0)
    {
      printf("cmd run done.......\n");
    }
  }
  return 0;
}
