#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)

//int main()                                          //malloc
//{                                                   //void* malloc (size_t size);
//	int *mem = (int*)malloc(sizeof(int)* 10);    //����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ��
//	if (NULL == mem)            //���ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣����ʧ�ܣ�����һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//	{                                          //memջ�����ٿռ䣬malloc�������ٿռ䣬mem��ջ��ָ�����
//		printf("malloc error\n");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)              //malloc��free�������� stdlib.h ͷ�ļ���
//	{
//		printf("%d ",*(mem + i) = i);
//	}
//	printf("\n");                              //free
//	free(mem);                                 //void free (void* ptr);
//	mem = NULL;                                //free���������ͷŶ�̬���ٵ��ڴ�,���ֲܾ��ͷ�Ҳ�����ظ��ͷ�
//	system("pause");                           //�������ͷţ���������ڴ�й©������
//	return 0;
//}

//int main()
//{
//	/*int a[1000 * 1000];*/       //ջ�Ͽ��ٵĿռ�ʱ�̶��ģ�����̫������鿪�ٲ��ˣ�������
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
//	free(p);         //freeǰ��free��ָ����ָ��ĵ�ַ�������κα仯���ı���Ǹ�ָ�����ڴ�Ĺ�����ϵ
//	printf("after:%p\n", p);
//	p = NULL;        //����p����ָ������������ɷ��ʣ�����ÿ�
//	system("pause");
//	return 0;
//}


//int main()
//{                                        //calloc
//	int *p = (int*)calloc(5, 4);         //void* calloc (size_t num, size_t size)  ���￪����20���ֽ�
//	if (NULL == calloc)                  //�����Ĺ�����Ϊ num ����СΪ size ��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
//	{                                    //�뺯�� malloc ������ֻ���� calloc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0
//		printf("calloc error\n");
//		return 1;
//	}
//	printf("calloc success\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


//int main()                        //realloc    �Զ�̬�����ڴ�Ĵ�С���е���
//{                                 //void* realloc (void* ptr, size_t size)
//	int *p = (int *)malloc(20);   //  ptr ��Ҫ�������ڴ��ַ   size ����֮���´�С  ����ֵΪ����֮����ڴ���ʼλ��
//	if (NULL == p)                //realloc�����ڴ�ռ�����������:
//	{                             //1:ԭ�пռ�֮�����㹻��Ŀռ�   2:ԭ�пռ�֮��û���㹻��Ŀռ�
//		return 1;                 //���1��ֱ��ԭ���ڴ�֮��ֱ��׷�ӿռ�
//	}                             //���2���ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á������������ص���һ���µ��ڴ��ַ
//	printf("malloc success!\n");
//	//p = realloc(p, 10); //����д����������ʧ�ܷ���NULL���Ὣָ���Ͽռ��p��ֵ�գ�����ָ���Ͽռ䣬���ܵ����ڴ�й©
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