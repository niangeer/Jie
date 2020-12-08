#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

#pragma warning(disable:4996)

//int main()                                //字符操作符
//{ 
//	int i = 0;                              //isspace：是否为空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
//	char str[] = "Test String.\n";          //isdigit：是否为数字
//	char c;                                 //islower:判定字符小写
//	while (str[i])                          //isupper:判定字符大写
//	{
//		c = str[i];
//		putchar(tolower(c));               //tolower：大写转小写，toupper：小写转大写
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()                                //memcpy   操作的基本单元为字节与类型无关
//{                                         //void * memcpy ( void * destination, const void * source, size_t num );
//	const char* src = "abcd1234";           //函数memcpy从source的起始位置开始向后复制num个字节的数据到destination的内存位置。
//	char dst[16];                           //遇到‘\0’不会停下
//	memcpy(dst, src, strlen(src)+1);        //可以用于数组，结构体的复制，strcpy用于字符串
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}

//struct Stu                                //复制结构体
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
//	char buffer1[] = "abcD1234";                       //比较从ptr1和ptr2指针开始的num个字节
//	char buffer2[] = "abCD1234";                       //可用于比较数组、结构体
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
//	int buffer1[] = { 1, 20, 3, 4};                       //比较从ptr1和ptr2指针开始的num个字节
//	int buffer2[] = { 1, 202, 3, 4 };                       //可用于比较数组、结构体
//	int n;
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
//{                                  //void * memset（void * ptr，int值，size_t num）;
//	int a[5] = { 0 };              //填充内存块，以字节为单位，不是以类型也不是以比特位为单位
//	memset(a, 1, sizeof(a));       //每个数字转化为0000 0001 0000 0001 0000 0001 0000 0001
//	system("pause");
//	return 0;
//}