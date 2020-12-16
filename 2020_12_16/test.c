#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                      //隐式类型转换--整型提升
//{                               //按照变量的数据类型的符号位来提升
//	                              //有符号类型：正数前面补0，负数补1。 无符号类型：正负都补0
//	signed char a = -1;           //1111 1111
//	printf("%d\n", a);            //1111 1111 1111 1111 1111 1111 1111 1111
//	printf("%u\n", a);            //1111 1111 1111 1111 1111 1111 1111 1111
//	signed char b = 1;            //0000 0001
//	printf("%d\n", b);            //0000 0000 0000 0000 0000 0000 0000 0001
//	printf("%u\n", b);            //0000 0000 0000 0000 0000 0000 0000 0001
//	unsigned char c = -1;
//	printf("%d\n", c);            //0000 0000 0000 0000 0000 0000 1111 1111
//	printf("%u\n", c);            //0000 0000 0000 0000 0000 0000 1111 1111
//	system("pause");
//	return 0;
//}

//心得：数据存入一个空间与数据被解读是两回事   例：%d与%u对整型提升后的-1进行解读

//int main()                  //只打印C
//{
//	char a = 0xb6;            //a提升为 1111 1111 1111 1111 1111 1111 1011 0110
//	short b = 0xb600;      //0xb6提升为 0000 0000 0000 0000 0000 0000 1011 0110
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}

//int main()                        //算术运算一定会进行提升，逻辑运算等看平台
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));   //1
//	printf("%d\n", sizeof(+c));  //4 参与运算，整型提升
//	printf("%d\n", sizeof(~c));  //4 参与运算，整型提升
//	printf("%d\n", sizeof(!c));  //1
//	system("pause");
//	return 0;
//}

//表达式求值：<1>隐式类型转换（整型提升）<2>算术转换
//long double           //排名较低，转换成另一操作数类型后再运算
//double
//float
//unsigned long int
//long int
//unsigned int
//int