#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()
//{
//	int a = 10;
//	int *p = &a;
////	p = 100;             //将100这个地址存入P，存入后P不再指向a,指向100号地址-----非法操作
//	*p = 100;            //a=100;
//	system("pause");
//	return 0;
//}

//int main()                  //指针加减整数
//{                           //指针定义：type+*
//	int arr[10] = { 0 };      //对指针加1，其实是加上指针所指向类型的大小，等于+sizeof(type)
//	int *pi = arr;            //二级指针及二级指针之上指针加1，都为加上4，即加指针类型
//	short *ps = (short*)arr;
//	char *pc = (char*)arr;
//	printf("######################\n");
//	printf("%p\n", arr);
//	printf("%p\n", pi);
//	printf("%p\n", ps);
//	printf("%p\n", pc);
//	printf("######################\n");
//	printf("%p\n", pi+1);
//	printf("%p\n", ps+1);
//	printf("%p\n", pc+1);
//	printf("######################\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;    //此电脑为小端存储，小小小
//	char *p = (char*)&a;
//	int *q = &a;
//	*p = 0x55;            //只会改变一个字节
//	*q = 0;               //改变4个字节
//	system("pause");
//	return 0;
//}



//int MyStrlen(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	const char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	return end - str;         //指针-指针的运用
//}
//int main()                 
//{
//	const char* str = "abcd1234";
//	int len = MyStrlen(str);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//int main()              //两指针相减代表的是两指针之间所经历的元素的个数，元素的类型由指针表明
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int *q = &arr[9];
//	printf("%d\n", q - p);     //9
//	short *a = (short*)arr;
//	short *b = (short*)&arr[9];
//	printf("%d\n", b - a);     //18
//	char *c = (char*)arr;
//	char *d = (char*)&arr[9];
//	printf("%d\n", d - c);     //36
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);          //相比少了一次寻址
//		printf("%d ", *(arr + i));      //相比少了一次寻址
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[5] = { 0 };
//	int *p[5] = { NULL };      //指针数组，存放指针的数组
//	//int(*p)[5];              //数组指针类型    数组指针，指向数组的指针   
//	int(*q)[5] = &a;           //数组指针变量    //存放了一维数组地址，相当于二维数组传参
//	system("pause");
//	return 0;
//}