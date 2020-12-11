#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)

//int main()                                          //malloc
//{                                                   //void* malloc (size_t size);
//	int *mem = (int*)malloc(sizeof(int)* 10);    //这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针
//	if (NULL == mem)            //开辟成功，则返回一个指向开辟好空间的指针。开辟失败，返回一个NULL指针，因此malloc的返回值一定要做检查。
//	{                                          //mem栈区开辟空间，malloc堆区开辟空间，mem从栈区指向堆区
//		printf("malloc error\n");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)              //malloc和free都声明在 stdlib.h 头文件中
//	{
//		printf("%d ",*(mem + i) = i);
//	}
//	printf("\n");                              //free
//	free(mem);                                 //void free (void* ptr);
//	mem = NULL;                                //free函数用来释放动态开辟的内存,不能局部释放也不能重复释放
//	system("pause");                           //若忘记释放，可能造成内存泄漏的问题
//	return 0;
//}

//int main()
//{
//	/*int a[1000 * 1000];*/       //栈上开辟的空间时固定的，并且太大的数组开辟不了，受限制
//	int *p = (int *)malloc(1000*1000);
//	if (NULL == p)
//	{
//		printf("malloc error\n");
//		return 1;
//	}
//	else
//	{
//		printf("malloc success\n");
//	}
//	printf("before:%p\n", p);
//	free(p);         //free前与free后，指针所指向的地址不发生任何变化，改变的是该指针与内存的关联关系
//	printf("after:%p\n", p);
//	p = NULL;        //所以p仍是指向堆区，但不可访问，最好置空
//	system("pause");
//	return 0;
//}


//int main()
//{                                        //calloc
//	int *p = (int*)calloc(5, 4);         //void* calloc (size_t num, size_t size)  这里开辟了20个字节
//	if (NULL == calloc)                  //函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0
//	{                                    //与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0
//		printf("calloc error\n");
//		return 1;
//	}
//	printf("calloc success\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


//int main()                        //realloc    对动态开辟内存的大小进行调整
//{                                 //void* realloc (void* ptr, size_t size)
//	int *p = (int *)malloc(20);   //  ptr 是要调整的内存地址   size 调整之后新大小  返回值为调整之后的内存起始位置
//	if (NULL == p)                //realloc调整内存空间存在两种情况:
//	{                             //1:原有空间之后有足够大的空间   2:原有空间之后没有足够大的空间
//		return 1;                 //情况1，直接原有内存之后直接追加空间
//	}                             //情况2，在堆空间上另找一个合适大小的连续空间来使用。这样函数返回的是一个新的内存地址
//	printf("malloc success!\n");
//	//p = realloc(p, 10); //错误写法，若申请失败返回NULL，会将指向老空间的p赋值空，不再指向老空间，可能导致内存泄漏
//	int *_p = realloc(p, 10);   
//	if (NULL == _p)
//	{
//		return 1;
//	}
//	p = _p;
//	free(p);
//	p = NULL;
//	_p = NULL;
//	system("pause");
//	return 0;
//}