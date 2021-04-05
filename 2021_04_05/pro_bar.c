#include "pro_bar.h"

void proc()
{
  char bar[101] = {'\n'};
  const char* lable = "|/-\\";
  int i = 0;

  for(; i <= 100; i++)
  {
    bar[i] = '#';
    printf("[%-100s][%3d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    usleep(50000);
  }
  printf("\n");
}
