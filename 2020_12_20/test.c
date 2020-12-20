#include <stdio.h>
#include <Windows.h>
#include <assert.h>

#pragma warning(disable:4996)

//int main()         //指针数组
//{
//	int *arr1[4];  //这是整型指针的数组
//	char *arr2[4]; //这是字符指针的数组
//	char **arr3[4];//二级字符指针的数组      //数组里面存放的是char**
//	system("pause");
//	return 0;
//}


//void test(int **a)         //创建个二级整型指针接收整型指针数组的首元素地址
//{                          //整型指针数组的首元素为整型指针类型
//
//}
//int main()
//{
//	int *a[5] = { NULL };
//	test(a);
//	system("pause");
//	return 0;
//}


//void test(int arr[3][5])      //能接收
//void test2(int arr[][])       //不能接收
//void test1(int arr[][5])      //能接收
//void test3(int *arr)          //不能接收   接收整型指针类型
//void test4(int *arr[5])       //不能接收   整型指针数组，接收整型指针类型的地址，，等同于test6
//void test5(int(*arr)[5])      //能接收     整型数组指针，接收整型数组指针类型
//void test6(int **arr)         //不能接收   二级整型指针，接收整型指针类型的地址
//int main()
//{
//	int arr[3][5] = {0}; //二级数组传参降维成指向其内部元素类型的指针，这里是整型数组指针
//	test(arr);
//	system("pause");
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()                           //函数指针变量：保存函数地址的变量
//{                                  
//	printf("%d\n", ADD(10, 20));     //函数名是地址，是函数中众多代码块中的起始地址
//	int(*p)(int, int) = ADD;         //函数指针变量的开辟
//	printf("%d\n", (*p)(100, 200)); 
//	printf("%d\n", p(100, 200));     //函数指针，p与(*p)等价
//    printf("%p\n",ADD);              //函数名代表函数的地址，其含义与&函数名等价
//    printf("%p\n",&ADD);
//	system("pause");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	if (0 == y)
//	{
//		printf("Div zero!\n");
//		return -1;
//	}
//	return x / y;
//}
//void Menu()
//{
//	printf("####################\n");
//	printf("##1,Add      2,Sub##\n");
//	printf("##3,Mul      4,Div##\n");
//	printf("####################\n");
//	printf("Plese select# ");
//}
//#define NUM 5
//int main()                                         //函数指针数组计算器    转移表
//{
//	int(*p[NUM])(int, int) = {NULL,Add,Sub,Mul,Div};
//	int quit = 0;
//	int select = 0;
//	while (!quit)
//	{
//		Menu();
//		scanf("%d", &select);
//		if (select<1 || select>4)
//		{
//			printf("Enter error,try again!\n");
//			continue;
//		}
//		int x = 0;
//		int y = 0;
//		printf("Please enter tow date# ");
//		scanf("%d %d", &x, &y);
//		int ret = p[select](x, y);
//		printf("result=%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}



//int main()           //指针地址与解引用的地址
//{
//	int a = 4;
//	int *p = &a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	printf("%p\n", *p);
//	printf("%p\n", a);
//	system("pause");
//	return 0;
//}


//void Swap(char *str, char *dst, int size)      //模拟实现qsort函数
//{
//	while (size)
//	{
//		char temp = *str;
//		*str = *dst;
//		*dst = temp;
//		str++;
//		dst++;
//		size--;
//	}
//}
//
//int ComInt(const void* _x, const void* _y)
//{
//	int *x = (int *)_x;
//	int *y = (int *)_y;
//	if (*x > *y)
//	{
//		return 1;
//	}
//	else if (*x < *y)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void my_qsort(void* arr, int num, int size, int (*Compar)(const void* x, const void* y))  
//{
//	assert(arr != NULL);                          //Compar记得加*,函数指针
//	assert(Compar != NULL);
//	char* e = (char*)arr;
//	for (int i = 0; i < num - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (Compar(e + j*size, e + (j + 1)*size)>0)
//			{
//				flag = 1;
//				Swap(e + j*size, e + (j + 1)*size, size);
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
//void show(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 4, 2, 3, 45, 65, 876, 99, 5, 457, 43 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	show(arr, num);		
//	my_qsort(arr, num, sizeof(int), ComInt);
//	show(arr,num);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));         //16  整个数组
//	printf("%d\n", sizeof(a+0));       //4   指针类型
//	printf("%d\n", sizeof(*a));        //4   首元素地址解引用（整型类型）
//	printf("%d\n", sizeof(a+1));       //4   第二个元素的地址
//	printf("%d\n", sizeof(a[1]));      //4   第二个元素
//	printf("%d\n", sizeof(&a));        //4   数组指针
//	printf("%d\n", sizeof(*&a));       //16  对数组指针解引用（数组类型）
//	printf("%d\n", sizeof(&a+1));      //4   数组指针
//	printf("%d\n", sizeof(&a[0]));     //4   首元素地址
//	printf("%d\n", sizeof(&a[0]+1));   //4   第二个元素地址
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(a));                       //6      整个数组
//	printf("%d\n", sizeof(a + 0));                   //4      首元素地址
//	printf("%d\n", sizeof(*a));                      //1      首元素地址解引用（第一个元素，字符类型）
//	printf("%d\n", sizeof(a[1]));                    //1      第二个元素
//	printf("%d\n", sizeof(&a));                      //4      数组指针
//	printf("%d\n", sizeof(&a + 1));                  //4      数组指针
//	printf("%d\n", sizeof(&a[0] + 1));               //4      第二个元素地址
//	system("pause");
//	return 0;
//}

//int main()
//{
//  //size_t strlen(const char* str);
//	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(a));                   //6+随机             整个数组   
//	printf("%d\n", strlen(a + 0));               //6+随机             首元素地址
////	printf("%d\n", strlen(*a));                  //报错               第一个元素，字符类型
////	printf("%d\n", strlen(a[1]));                //报错               第二个元素，字符类型
//	printf("%d\n", strlen(&a));                  //warning、6+随机    数组指针类型
//	printf("%d\n", strlen(&a + 1));              //warning、随机      数组指针类型
//	printf("%d\n", strlen(&a[0] + 1));           //5+随机             第二个元素地址
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));           //7    整个数组
//	printf("%d\n", sizeof(a + 0));       //4    首元素地址
//	printf("%d\n", sizeof(*a));          //1    第一个元素
//	printf("%d\n", sizeof(a[1]));        //1    第二个元素
//	printf("%d\n", sizeof(&a));          //4    数组指针
//	printf("%d\n", sizeof(&a + 1));      //4    数组指针
//  	printf("%d\n", sizeof(&a[0] + 1));   //4    第二个元素地址
//	system("pause");
//	return 0;
//}


//int main()
//{
//  //size_t strlen(const char* str);
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));              //6                  整个数组
//	printf("%d\n", strlen(a + 0));          //6                  首元素地址
//	//printf("%d\n", strlen(*a));             //报错             首元素，字符类型
//	//printf("%d\n", strlen(a[1]));           //报错             第二个元素，字符类型
//	printf("%d\n", strlen(&a));             //warning、6         数组指针
//	printf("%d\n", strlen(&a + 1));         //warning、随机      数组指针
//	printf("%d\n", strlen(&a[0] + 1));      //5                  第二个元素地址
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char* a = "abcdef";
//	printf("%d\n", sizeof(a));               //4      指向字符串的指针
//	printf("%d\n", sizeof(a + 1));           //4      指向字符串第二个元素的指针
//	printf("%d\n", sizeof(*a));              //7      结果为1，没有字符串类型，*a为字符a（首元素）
//	printf("%d\n", sizeof(a[0]));            //1      首元素
//	printf("%d\n", sizeof(&a));              //4      二级指针类型
//	printf("%d\n", sizeof(&a + 1));          //4      二级指针类型
//	printf("%d\n", sizeof(&a[0] + 1));       //4      第二个元素地址
//	printf("%d\n", sizeof(*(&a)));           //4      指针类型，结果为a指针
//	system("pause");
//	return 0;
//}


//int main()
//{
//  //size_t strlen(const char* str);
//	char* a = "abcdef";
//	printf("%d\n", strlen(a));             //6                指向字符串的指针
//	printf("%d\n", strlen(a + 1));         //5                指向第二个元素的指针
//	//printf("%d\n", strlen(*a));            //报错           第一个元素
//	//printf("%d\n", strlen(a[0]));          //报错           第一个元素
//	printf("%d\n", strlen(&a));            //warning、随机    二级指针
//	printf("%d\n", strlen(&a + 1));        //warning、随机    二级指针
//	printf("%d\n", strlen(&a[0] + 1));     //5                第二个元素的地址
//	system("pause");
//	return 0;
//}


//int main()                                       //sizeof本质上是求类型的大小，而不是变量的大小
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));                   //48      整个数组
//	printf("%d\n", sizeof(a[0][0]));             //4       整个数组的第一个元素
//	printf("%d\n", sizeof(a[0]));                //16      数组1（第一个一维数组）
//	printf("%d\n", sizeof(a[0]+1));              //4       第二个元素的地址
//	printf("%d\n", sizeof(*(a[0]+1)));           //4       第二个元素
//	printf("%d\n", sizeof(a + 1));               //4       数组2的地址
//	printf("%d\n", sizeof(*(a + 1)));            //16      数组2
//	printf("%d\n", sizeof(&a[0] + 1));           //4       数组2的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));        //16      数组2
//	printf("%d\n", sizeof(*a));                  //16      数组1
//	printf("%d\n", sizeof(a[3]));                //16      数组4（C语言中允许，只是读取没有使用）
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}


//int main()                                           //画图理解
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}