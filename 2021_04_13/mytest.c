#include <stdio.h>
#include <unistd.h>

void func2(int a,int b)
{
//从上往下入栈
  int c = 5;
  int d = 5;
  printf("fun2_a:%p\n",&a);
  printf("fun2_b:%p\n",&b);
  printf("fun2_c:%p\n",&c);
  printf("fun2_d:%p\n",&d);
}

//函数参数从左往右入栈，windows从右往左
void func(int a,int b)
{
//从上往下入栈
  int c = 5;
  int d = 5;
  printf("func_a:%p\n",&a);
  printf("func_b:%p\n",&b);
  printf("func_c:%p\n",&c);
  printf("func_d:%p\n",&d);
  func2(a,b);
}


int main()
{
//从上往下入栈
  int a = 0;
  int b = 0;
  int c = 0;
  printf("main_a:%p\n",&a);
  printf("main_b:%p\n",&b);
  printf("main_c:%p\n",&c);
  func(a,b);
  return 0;
}
