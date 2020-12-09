#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <assert.h>

#pragma warning (disable:4996)

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

const char* MyStrstr(const char* str, const char* sub_str)
{
	assert(NULL != str);
	assert(NULL != sub_str);
	while (*str)                             //ȷ����ʼλ��
	{ 
		const char* p = str;
		const char* q = sub_str;
		while (*p && *q && *p == *q)         //�ֲ��Ƚ�
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return str;
		}
		str++;
	}
	return NULL;
}
int main()                                  //ģ��ʵ��strstr
{
	const char* str = "abc 123 abcd 12345 abcdef";
	const char* sub_str = "1234";
	const char* s = MyStrstr(str, sub_str);
	printf("%s\n", s);
	system("pause");
	return 0;
}





