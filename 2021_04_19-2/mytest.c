//fwrite : 以二进制方式写入

#include <stdio.h>
#include <string.h>

int main()
{
  FILE* pf = fopen("hello.c","a");
  if(!pf)
  {
    printf("open error\n");
    return 1;
  }
  const char* tmp = "hello world\n";
  //字符串类型使用strlen，sizeof(tmp)为计算指针大小
  //可sizeof("hello world")
  fwrite(tmp, 1, strlen(tmp), pf);
  return 0;
}
