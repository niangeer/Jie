#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)

//typedef struct stu
//{
//	int i;
//	int arr[];                                       //���������Ա
//}s_t;
//int main()                                         //�������飺�ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
//{                                                        
//	s_t* p = (s_t*)malloc(sizeof(s_t)+sizeof(int)* 10);    //1��sizeof ���ص����ֽṹ��С����������������ڴ�
//	if (NULL == p)                       //�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С
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
//int main()                 //��ָ��ʵ����������Ĺ���       ��ջ�ռ�ָ��ѿռ�
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
//int main()                                      //��ָ��ʵ����������Ĺ���    ����������һ��ȫ���ռ��ڶ�������
//{ 
//	struct A* p = (struct A*)malloc(sizeof(struct A) + 40);           //ȱ�㣺��Ҫmalloc���Σ�free����
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