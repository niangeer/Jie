#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)

////1����NULLָ��Ľ����ò���
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;                                   //��������ʧ�ܣ�����ʧ��pΪNULL��������Ҫ�ж�
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
//	str = NULL;
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
//	str = NULL;
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