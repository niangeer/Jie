#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

//int main()                 //strncpy  char* strncpy(char* destination,const char* source,size_t num)
//{                          //��Դ�ַ���С��num,�򿽱���Դ�ַ�������Ŀ�����׷��0��ֱ��num��
//	const char *src = "world!";
//	char dst[16];                     //��ʽ���ã�����strlen �󣬽��䷵��ֵ��Ϊ����
//	strncpy(dst, src, strlen(src)+1); //������dstΪ��world!\0������������
//	system("pause");
//	return 0;
//}

////strncat   char* strncat(char* destination,const char* source,size_t num) ;
//int main()
//{
//	const char *src = "world!";
//	char dst[16] = "hello\0xxas";
//	strncat(dst, src,strlen(src));   //������'\0'��λ�ã���������Ϊ��helloworld!����ȫ��\0
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}

//int main()      //puts  
//{
//	char str[20];
//	char str1[20];
//	strcpy(str, "to be ");
//	strcpy(str1, "or not to be");
//	strncat(str, str1, 6);
//	puts(str);
//	system("pause");
//	return 0;
//}

//int main()          //puts:�Ǹ�ʽ�����   printf:��ʽ�����
//{
//	puts("hello %d\n");
//	fputs("hello %d\n", stdout);        //fputs��puts������
//	printf("hello %d\n", 10);
//	system("pause");
//	return 0;
//}


//int main()                //strncmp��ʹ�ã��������������ַ���
//{
//	char str[][5] = { "r2d2", "c3p0", "r2a6" };
//	int n;
//	puts("Looking for r2 astromech droids...");
//	for (n = 0; n < 3; n++)
//	if (strncmp(str[n], "r2xx", 2) == 0)
//	{
//		printf("found %s\n", str[n]);         //str[n]:����ŵ���ָ���ַ����ĵ�ַ
//	}
//	system("pause");
//	return 0;
//}


//int main()                //strstr:�Ӵ�����      ����ǰһ���ַ����е�һ�γ��ֺ�һ���ַ���ʱ�ĵ�ַ
//{
//	char* start = strstr("hello bit,hello world!","bit");
//	printf("%s\n", start);
//	system("pause");
//	return 0;
//}

//int main()                     //strstr��strncpy������ʹ�ã����ַ������и���
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");  //pchָ��"simple"����Ԫ�ص�ַ
//	strncpy(pch, "sample", 6);
//	puts(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//int main()      //strtok:�ַ����ָ�
//{
//	char str[] = "This is#a_simple.string";
//	char* p = strtok(str, " #_.");
//	while (p != NULL)
//	{
//		printf("%s\n", p);
//		p = strtok(NULL, " #_.");
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char* p = "This is#a,simple.string";
//	char dst[30] = { 0 };
//	strcpy(dst, p);
//	char* str = NULL;
//	for (str = strtok(dst, " #,."); str != NULL; str=strtok(NULL, " #,."))
//	{
//		printf("%s\n", str);
//	}
//	system("pause");
//	return 0;
//}

//#include <errno.h>   //���������ͷ�ļ�
//int main()    //strerror   char* strerror(int errnum);���ش����룬����Ӧ�Ĵ�����Ϣ
//{
//	printf("before:%d\n", errno);
//	FILE *fp = fopen("test.log", "r");
//	if (fp == NULL)
//	{
//		printf("after:%d\n", errno);
//		printf("after:%s\n", strerror(errno));
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 50; i++)
//	{
//		printf("%2d->%s\n", i, strerror(i));
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char str = 'c';            //�ַ���char���գ��ַ�����char*����
//	char *str1 = "c";
//	system("pause");
//	return 0;
//}



//int main()
//{
//	char* p = "This is#a,simple.string";
//	char dst[30] = { 0 };
//	strcpy(dst, p);
//	char* str = NULL;
//	for (str = strtok(dst, " #,."); str != NULL; str = strtok(NULL, " #,."))
//	{
//		printf("%s\n", str);
//	}
//	system("pause");
//	return 0;
//}

