#pragma warning (disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//int main()                             //C������û���ַ����ĸ���ַ�����\0��β�������������У��򱣴����ַ�����������ָ��ָ��
//{
//	char str[] = { 'a','b','c' };
//	char str1[5] = { 'a', 'b', 'c' };      //2��3��ͬ����1����
//	char arr[5] = "abc";
//	printf("%s\n", str);
//	printf("%s\n", str1);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


//int main()                          //�ַ�����\0��β
//{
//	char str[] = "abcd";
//	//printf("%p\n", str[0]);        //���������ַ����еĵ�һ��Ԫ�أ����ַ�a
//	printf("%p\n", str);           //��Ԫ�ص�ַ
//	printf("%x\n", str);
//	//printf("%s\n", str[0]);        //���������ַ����еĵ�һ��Ԫ�أ����ַ�a��ֻ�����ַ���ӡ
//	printf("%s\n", str);           //ָ��ָ���ַ���ĳ��Ԫ�صĵ�ַ
//	printf("%s\n", str+1);
//	system("pause");
//	return 0;
//}

//#include <string.h>
//int main()                                           // strlen����
//{
//	//size_t strlen(const char* str)                 //size_t :�޷�������  
//	char szInput[10];
//	printf("Enter a sentence: ");
//	gets(szInput);                             //���� ��gets����׼����
//	printf("%s ", szInput);
//	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
//	system("pause");
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	printf("str1=%d\n", strlen(str1));
//	printf("str2=%d\n", strlen(str2));
//	if (strlen(str2) - strlen(str1) > 0)     //�޷�������-�޷�������=�޷�����������Ϊ0��IfΪ��
//	{
//		printf("str2>str1\n");
//	}
//	else
//{
//		printf("str1>str2\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()                          //strcpy
//{ 
//	//strcpy        �Ѻ��߿���ǰ�ߣ�����ֵΪ�������֮�����ַ�������ʼ��ַ
//	//	char* strcpy(char* destination, const char* source);
//	const char* src = "hello world!";
//	char dst[16];
//	strcpy(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char scr[] = { 'w', 'o', 'r', 'l', 'd' };    //Դ�ַ���������'\0'����
//	char dst[16] = { 0 };
//	strcpy(dst, scr);
//	printf("%s", dst);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const char* src = "hello";
//	char dst[16]="i love China";   //�Ὣ\0���룬������dst�����Ϊ��"hello\0 China"
//	strcpy(dst, src);
//	printf("%s\n", dst);          //��ӡֻ���ӡhello,�ַ�����ӡ��\0ֹͣ���������ݲ���ӡ
//	printf("%s\n", src);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//strcat     �ַ���ƴ�ӣ��Ѻ�һ��ƴ��ǰһ������
//	      //char* strcat(char* destination,const char* source);
//	const char *src = "world!";
//	char dst[16] = "hello ";
//	strcat(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}


//int main()                             //strcmp
//{
//	printf("%d\n", strcmp("abc", "abc"));
//	printf("%d\n", strcmp("abcd", "abd"));
//	printf("%d\n", strcmp("abxy", "ab12"));
//	printf("%d\n", strcmp("abcd", "abcdef"));
//	system("pause");
//	return 0;
//}


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
//	fputs("hello %d\n", stdout);
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
//		printf("found %s\n", str[n]);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[][5] = { "r2t2", "adwf", "r2d6" };
//	int n = 0;
//	puts("looking for r2 astromech droids...");
//	for (n = 0; n < 3; n++)
//	if(	strncmp(str[n], "r2xx",2)==0)
//	{
//		printf("found %s\n", str[n]);
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

//int main()                              //�ַ�ת��
//{
//	char c = tolower('A');
//	printf("%c\n", c);
//	system("pause");
//	return 0;
//}


//int main()                                //�ַ�������
//{ 
//	int i = 0;                              //isspace���Ƿ�Ϊ�հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//	char str[] = "Test String.\n";          //isdigit���Ƿ�Ϊ����
//	char c;                                 //islower:�ж��ַ�Сд
//	while (str[i])                          //isupper:�ж��ַ���д
//	{
//		c = str[i];
//		putchar(tolower(c));               //tolower����дתСд��toupper��Сдת��д
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()                                //memcpy   �����Ļ�����ԪΪ�ֽ��������޹�
//{                                         //void * memcpy ( void * destination, const void * source, size_t num );
//	const char* src = "abcd1234";           //����memcpy��source����ʼλ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//	char dst[16];                           //������\0������ͣ��
//	memcpy(dst, src, strlen(src)+1);        //�����������飬�ṹ��ĸ��ƣ�strcpy�����ַ���
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}

//struct Stu                                //���ƽṹ��
//{
//	char name[32];
//	int age;
//};
//int main()
//{
//	struct Stu src = { "tom", 21 };
//	struct Stu dst;
//	memcpy(&dst, &src, sizeof(src));
//	printf("%s\n", (src).name);
//	printf("%d\n", (src).age);
//	system("pause");
//	return 0;
//}

//int main()                                             //memcmp
//{                                                      //int memcmp ( const void * ptr1,const void * ptr2,size_t num );
//	char buffer1[] = "abcD1234";                       //�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//	char buffer2[] = "abCD1234";                       //�����ڱȽ����顢�ṹ��
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0)
//	{
//		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	}
//	else if (n < 0) 
//	{
//		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	}
//	else 
//	{
//		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	}
//	system("pause");
//	return 0;
//}

//int main()                                             //memcmp
//{                                                      //int memcmp ( const void * ptr1,const void * ptr2,size_t num );
//	int buffer1[] = { 1, 20, 3, 4};                       //�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//	int buffer2[] = { 1, 202, 3, 4 };                       //�����ڱȽ����顢�ṹ��
//	int n;                                                  //�ǽ��ֽ�ת��Ϊascii��ֵ���бȽ�
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0)
//	{
//		printf("buffer1 is greater than buffer2.\n");
//	}
//	else if (n < 0)
//	{
//		printf("buffer1 is less than buffer2.\n");
//	}
//	else
//	{
//		printf("buffer1 is the same as buffer2.\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()                         //memset
//{                                  //void * memset��void * ptr��intֵ��size_t num��;
//	int a[5] = { 0 };              //����ڴ�飬���ֽ�Ϊ��λ������������Ҳ�����Ա���λΪ��λ
//	memset(a, 1, sizeof(a));       //ÿ������ת��Ϊ0000 0001 0000 0001 0000 0001 0000 0001
//	system("pause");
//	return 0;
//}

//char *MyStrcpy(char* dst, const char* src)            //ģ��ʵ��strcpy
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char* start = dst;
//	while (*start = *src)
//	{
//		start++;
//		src++;
//	}
//	return dst;
//}
//
//int main()
//{
//	char* src = "abcd1234";
//	char dst[16] = { 0 };
//	printf("%s\n", dst);
//	MyStrcpy(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}


//char* MyStrcat(char* dst, const char* src)            //ģ��ʵ��strcat
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char* start = dst;
//	while (*start)
//	{
//		start++;
//	}
//	while (*start = *src)
//	{
//		start++;
//		src++;
//	}
//	return dst;
//}
//int main()
//{
//	char dst[32] = "abcd1234";
//	printf("%s\n", dst);
//	MyStrcat(dst, "hello");
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}

//const char* MyStrstr(const char* str, const char* sub_str)
//{
//	assert(NULL != str);
//	assert(NULL != sub_str);
//	while (*str)                             //ȷ����ʼλ��
//	{ 
//		const char* p = str;
//		const char* q = sub_str;
//		while (*p && *q && *p == *q)         //�ֲ��Ƚ�
//		{
//			p++;
//			q++;
//		}
//		if (*q == '\0')
//		{
//			return str;
//		}
//		str++;
//	}
//	return NULL;
//}
//int main()                                  //ģ��ʵ��strstr
//{
//	const char* str = "abc 123 abcd 12345 abcdef";
//	const char* sub_str = "1234";
//	const char* s = MyStrstr(str, sub_str);
//	printf("%s\n", s);
//	system("pause");
//	return 0;
//}

//void* MyMemcpy(void* dst, const void* src, int num)
//{
//	assert(NULL != dst);
//	assert(NULL != src);
//	char* _dst = (char*)dst;
//	const char* _src = (const char*)src;
//	while (num)
//	{
//		*_dst = *_src;
//		_dst++;
//		_src++;
//		num--;
//	}
//	return dst;
//}
//
//void Show(int b[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//}
//int main()                                //ģ��ʵ��memcpy
//{                                         //�������ڴ��ص�������
//	int a[] = { 1, 2, 4, 9, 14 };
//	int b[10] = { 0 };
//	int num = sizeof(b) / sizeof(b[0]);
//	Show(b, num);
//	MyMemcpy(b, a, sizeof(a));
//	Show(b, num);
//	system("pause");
//	return 0;
//}



//void* MyMemmove(void* dst,const void* src, int num)
//{
//	assert(NULL != dst);
//	assert(NULL != src);
//	char* _dst = (char*)dst;
//	const char* _src = (const char*)src;
//	if (_dst > _src&&_dst < _src + num)      //right->left
//	{
//		_dst = _dst + num - 1;
//		_src = _src + num - 1;
//		while (num)
//		{
//			*_dst = *_src;
//			*_dst--;
//			*_src--;
//			num--;
//		}
//	}
//	else                                    //left->right
//	{
//		while (num)
//		{
//			*_dst = *_src;
//			_dst++;
//			_src++;
//			num--;
//		}
//	}
//	return dst;
//}
//int main()                                                       //ģ��ʵ��memmove
//{                                                                //��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص���
//	char dst[16] = "abcd1234";
//	printf("%s\n", MyMemmove(dst + 1, dst, strlen(dst)+1));
//	system("pause");
//	return 0;
//}