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
//	printf("after:%p\n", p);  //free��pΪҰָ��
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

////�����Ķ�̬�ڴ����
////1����NULLָ��Ľ����ò���
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;                                   //��������ʧ�ܣ�����ʧ�ܽ����ñ�ΪҰָ�룬������Ҫ�ж�
//	free(p);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);      //��ȷ
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


////2,�Զ�̬���ٿռ��Խ�����
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
//		*(p + i) = i;                     //��i��10��ʱ��Խ�����
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

////3,�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);                       //free���ܶԷǶ�̬���ٵ��ڴ�ʹ��
//	system("pause");
//	return 0;
//}


////4��ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);                  //p����ָ��̬�ڴ����ʼλ��,free���ֲܾ��ͷ�
//	system("pause");
//	return 0;
//}

////5����ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);               //�ظ��ͷ�,free�����ظ��ͷ�
//	system("pause");
//	return 0;
//}

////6����̬�����ڴ������ͷţ��ڴ�й©��
//int main()
//{
//	int *p = (int *)malloc(sizeof(int)* 4);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;                                //δʹ��free�ͷ��ڴ棬���ܻ�����ڴ�й©
//	system("pause");
//	return 0;
//}


//�мǣ� ��̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ�ͷ� ��


//void GetMemory(char* p)            
//{
//	p = (char*)malloc(100);        //1��δ�����ж��Ƿ�����ɹ�  2��pΪ�βΣ���p�Ĳ���Ӱ�첻��str��str��ȻΪNULL  3��δ���ж�̬�ڴ���ͷ�
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");   //�������������һ�� void GetMemory(char** p)    ��������char* GetMemory(char* p)
//	printf(str);
//	system("pause");
//	return 0;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//int main()                          //����һ
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
//int main()                           //������
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
//}                         //GetMemory����ջ֡�ͷź�����δ��������������printf���γ���ջ֡������֮ǰ���ݱ����ǣ����������ֵ
//int main()                             //��ӡ����Ϊ���ֵ
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
//	free(str);                            //free��pΪҰָ�룬��Ȼָ������������ɷ���
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