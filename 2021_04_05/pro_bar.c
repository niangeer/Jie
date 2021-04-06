#include "pro_bar.h"

void proc()
{
  char bar[101] = {'\n'};
  const char* lable = "|/-\\";
  int i = 0;

  for(; i <= 100; i++)
  {
    bar[i] = '#';
    printf("[%-100s][%c][%3d%%]\r",bar,lable[i%4],i);
    fflush(stdout);
    usleep(50000);
  }
  printf("\n");
}
