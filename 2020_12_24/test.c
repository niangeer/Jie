#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                         //语言内置预定义符号   日志
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	system("pause");
//	return 0;
//}

////#define F 1
//#define F              //可以不定义值
//int main()
//{
//#ifdef F
//	printf("1");
//#endif
//	system("pause");
//	return 0;
//}


//int main()
//{
////#define a 1
//#define a              //不可以不定义值
//#if a==1
//	printf("1");
//#else
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//#if a==1                 //1、宏已定义  2、宏有值
//	printf("1");
//#else
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//int main()                
//{
//#ifndef F            
//#define F           //若未定义F，则定义F
//	printf("1");
//#endif
//#ifndef F           //F已定义不再进行定义，常用于避免头文件的重复引入
//#define F
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//避免头文件重复引入的两种方式：1，#pragma once
//                              2，#ifndef  _TEST_H_ 
//                                 #define  _TEST_H_ 
//                                //头文件内容
//                                 #endif
//1, #pragma warning (disable:4996)
//2, #pragma once 
//3, #pragma pack()      //结构体默认对齐数的设置