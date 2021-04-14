#include <iostream>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main()
{
  pid_t id = fork();
  if(id > 0)
  {
    int count = 0;
    while(count < 10)
     {
       cout << "father " << getpid() << "; child " << id << " " << count <<endl;       
       count++;
       sleep(1);
     }
    wait(NULL);
  }
  else if(id == 0)
  {
    sleep(1);
    int count = 0;
    while(count < 5)
    {
      sleep(1);
      cout << getpid() << " " << count << endl;
      count++;
    }
    exit(0);
  }
  else
  {
    cerr << "fork error" << endl;
    exit(-1);
  }
  return 0;
}
