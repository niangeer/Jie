#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)

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
//	struct A* p = (struct A*)malloc(sizeof(struct A) + 40);           //缺点：需要malloc两次，free两次
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