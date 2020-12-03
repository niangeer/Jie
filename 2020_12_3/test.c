#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

//int main()                 //strncpy  char* strncpy(char* destination,const char* source,size_t num)
//{                          //若源字符串小于num,则拷贝完源字符串后，在目标后面追加0，直到num个
//	const char *src = "world!";
//	char dst[16];                     //链式调用，调用strlen 后，将其返回值作为参数
//	strncpy(dst, src, strlen(src)+1); //拷贝后dst为：world!\0及后面的随机数
//	system("pause");
//	return 0;
//}

////strncat   char* strncat(char* destination,const char* source,size_t num) ;
//int main()
//{
//	const char *src = "world!";
//	char dst[16] = "hello\0xxas";
//	strncat(dst, src,strlen(src));   //拷贝至'\0'的位置，拷贝后结果为：helloworld!后面全跟\0
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

//int main()          //puts:非格式化输出   printf:格式化输出
//{
//	puts("hello %d\n");
//	fputs("hello %d\n", stdout);        //fputs与puts的区别
//	printf("hello %d\n", 10);
//	system("pause");
//	return 0;
//}


//int main()                //strncmp的使用，可以用来查找字符串
//{
//	char str[][5] = { "r2d2", "c3p0", "r2a6" };
//	int n;
//	puts("Looking for r2 astromech droids...");
//	for (n = 0; n < 3; n++)
//	if (strncmp(str[n], "r2xx", 2) == 0)
//	{
//		printf("found %s\n", str[n]);         //str[n]:里面放的是指向字符串的地址
//	}
//	system("pause");
//	return 0;
//}


//int main()                //strstr:子串查找      返回前一个字符串中第一次出现后一个字符串时的地址
//{
//	char* start = strstr("hello bit,hello world!","bit");
//	printf("%s\n", start);
//	system("pause");
//	return 0;
//}

//int main()                     //strstr与strncpy的联合使用，对字符串进行更改
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");  //pch指向"simple"的首元素地址
//	strncpy(pch, "sample", 6);
//	puts(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//int main()      //strtok:字符串分割
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

//#include <errno.h>   //必须包含的头文件
//int main()    //strerror   char* strerror(int errnum);返回错误码，所对应的错误信息
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
//	char str = 'c';            //字符用char接收，字符串用char*接收
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

