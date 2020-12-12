#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)

////1，对NULL指针的解引用操作
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;                                   //可能申请失败，申请失败p为NULL，所以需要判断
//	free(p);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);      //正确
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;
//	printf("%d\n", *p);
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


////2,对动态开辟空间的越界访问
//int mian()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;                     //当i是10的时候越界访问
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

////3,对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);                       //free不能对非动态开辟的内存使用
//	system("pause");
//	return 0;
//}


////4，使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);                  //p不再指向动态内存的起始位置,free不能局部释放
//	system("pause");
//	return 0;
//}

////5，对同一块动态内存多次释放
//int main()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);               //重复释放,free不能重复释放
//	system("pause");
//	return 0;
//}

////6，动态开辟内存忘记释放（内存泄漏）
//int main()
//{
//	int *p = (int *)malloc(sizeof(int)* 4);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;                                //未使用free释放内存，可能会造成内存泄漏
//	system("pause");
//	return 0;
//}


//切记： 动态开辟的空间一定要释放，并且正确释放 。


//void GetMemory(char* p)            
//{
//	p = (char*)malloc(100);        //1，未进行判断是否申请成功  2，p为形参，对p的操作影响不到str，str依然为NULL  3，未进行动态内存的释放
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");   //解决方案：方案一： void GetMemory(char** p)    方案二：char* GetMemory(char* p)
//	printf(str);
//	system("pause");
//	return 0;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//int main()                          //方案一
//{
//	char* str = NULL;
//	GetMemory(&str);
//	if (NULL == str)
//	{
//		return 1;
//	}
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//	system("pause");
//	return 0;
//}

//char* GetMemory(void)
//{
//	return (char*)malloc(100);
//}
//int main()                           //方案二
//{
//	char* str = NULL;
//	str = GetMemory();
//	if (NULL == str)
//	{
//		return 1;
//	}
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	str = NULL;
//	system("pause");
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}                         //GetMemory函数栈帧释放后，数据未被消除，但调用printf又形成新栈帧，导致之前数据被覆盖，所以是随机值
//int main()                             //打印出来为随机值
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);                            //free后p为野指针，仍然指向堆区，但不可访问
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	system("pause");
//	return 0;
//}