#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int main()
{
  pid_t id = fork();

  if(id < 0)
  {
    cout << "fork error" <<endl;
    exit(-1);
  }

  if(id == 0)
  {
    //child
    int count = 0;
    while(count < 5)
    {
      printf("child [%d] is runing...\n",getpid());
      sleep(1);
      count++;
     // int ret = 1/0;    //进程异常退出的情况
    }
    exit(29);
  }

  //father
  cout << "father wait before..." << endl;
  int st = 0;
  pid_t ret = waitpid(id, &st, 0);

  if(ret > 0)  //等待成功的情况
  {
    if(st & 0x7f) //判断是否异常退出，相当于WIFEXITED(st)
    {
      cout << "child run error" <<endl;
    }
    else
    {
      int code = ((st >> 8) & 0xff);  
      if(code)   //判断子进程运行是否正确
      {
        cout << "child run success, but result is not right, code: " << code << endl;
      }
      else
      {
        cout << "child run success, result is right, code: " << code << endl;
      }
    }
  }
  else
  {
    cout << "wait error" << endl;
  }

  cout << "father wait after..." <<endl;

  return 0;
}
