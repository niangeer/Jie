#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()                                //相邻字符串自动连接特性
//{
//	printf("hello""world""hello""bit\n");
//	const char* str = "hello""world";
//	printf(str);
//	system("pause");
//	return 0;
//}

//#define PRINT(s) printf(#s)
//int main()                              //#
//{                                       //使用 # ，把一个宏参数变成对应的字符串
//	PRINT(10 + 20 + 30);                  //即把10+20+30替换为"10+20+30"
//	system("pause");
//	return 0;
//}


//#define PRINT(FORMAT,VALUE) printf("the value of " #VALUE " is " FORMAT "\n", VALUE)
//int main()
//{
//	PRINT("%d", 10+20);
//	system("pause");
//	return 0;
//}


//#define MAKE(n,v) sum##n+=v
//int main()                          //##
//{                                   //##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符
//	int sum1 = 10;                  //注： 这样的连接必须产生一个合法的标识符。否则其结果就是未定义的
//	printf("sum1=%d\n", sum1);
//	MAKE(1, 20);
//	printf("sum1=%d\n", sum1);
//	system("pause");
//	return 0;
//}

//#undef 这条指令用于移除一个宏定义。