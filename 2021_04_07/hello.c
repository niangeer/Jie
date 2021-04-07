#include "hello.h"

int Sum(int n)
{
  int i = 1;
  int rt = 0;
  for(; i < n; i++)
  {
    rt += i;
  }
  return rt;
}
