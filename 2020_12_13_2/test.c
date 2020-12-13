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
//	printf("after:%p\n", p);  //free后p为野指针
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

////常见的动态内存错误
////1，对NULL指针的解引用操作
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;                                   //可能申请失败，申请失败解引用变为野指针，所以需要判断
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


//typedef struct stu
//{
//	int i;
//	int arr[];                                       //柔性数组成员
//}s_t;
//int main()                                         //柔性数组：结构中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员
//{                                                        
//	s_t* p = (s_t*)malloc(sizeof(s_t)+sizeof(int)* 10);    //1，sizeof 返回的这种结构大小不包括柔性数组的内存
//	if (NULL == p)                       //包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}




//struct stu
//{
//	int i;
//	int *p;
//}s;
//
//int main()                 //用指针实现柔性数组的功能       从栈空间指向堆空间
//{
//	s.p = (int *)malloc(sizeof(int)* 10);
//	if (NULL == s.p)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		s.p[i] = i;
//		printf("%d ", s.p[i] = i);
//	}
//	free(s.p);
//	s.p = NULL;
//	system("pause");
//	return 0;
//}

//struct A
//{
//	int i;
//	int* ptr;
//};
//int main()                                      //用指针实现柔性数组的功能    与柔性数组一样全部空间在堆区开辟
//{ 
//	struct A* p = (struct A*)malloc(sizeof(struct A) + 40);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	p->ptr = (int *)malloc(40);
//	if (NULL == p->ptr)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p->ptr[i] = i;
//		printf("%d ", p->ptr[i]);
//	}
//	free(p->ptr);
//	p->ptr = NULL;
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}