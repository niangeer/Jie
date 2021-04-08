#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
  pid_t ret = fork();
  if(ret > 0)
  {
    while(1)
    {
      printf("pid = %d\n",getpid());
      sleep(1);
    }
  }
  else if(0 == ret)
  {
    int count = 0;
    while(count < 5)
    {
      printf("pid = %d,ppid = %d\n",getpid(),getppid());
      sleep(1);
      count++;
    }
    exit(0);
  }
  return 0;
}
