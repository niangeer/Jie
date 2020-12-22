#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//#define ADD(x,y) x+y   //格式最好写成：#define ADD(x,y) ((x)+(y))     
//int main()
//{
//	printf("%d\n", ADD(10, 20));
//	printf("%d\n", 10 * ADD(10, 20));    //宏替换后为10*10+20
//	system("pause");
//	return 0;
//}

//#define M 2
//#define SEQ(x) ((x)*(x))
////#define A B                     //错误（递归）
////#define B A
//int main()                        //宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归
//{
//	printf("%d\n", SEQ(M));         //宏替换规则本质上是由内到外
//	system("pause");
//	return 0;
//}


//#define M 10
//int main()       
//{
//	printf("%d\n", M);
//	printf("helloM\n");            //当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索
//	int aM = 10;                   //此处的M也不会被替换
//	system("pause");
//	return 0;
//}