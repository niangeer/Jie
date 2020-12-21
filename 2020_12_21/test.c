#pragma warning (disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//int main()                             //C语言中没有字符串的概念，字符串以\0结尾，保存在数组中；或保存于字符常量区，由指针指向
//{
//	char str[] = { 'a','b','c' };
//	char str1[5] = { 'a', 'b', 'c' };      //2、3等同，与1相异
//	char arr[5] = "abc";
//	printf("%s\n", str);
//	printf("%s\n", str1);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


//int main()                          //字符串以\0结尾
//{
//	char str[] = "abcd";
//	//printf("%p\n", str[0]);        //报错，代表字符串中的第一个元素，即字符a
//	printf("%p\n", str);           //首元素地址
//	printf("%x\n", str);
//	//printf("%s\n", str[0]);        //报错，代表字符串中的第一个元素，即字符a，只能以字符打印
//	printf("%s\n", str);           //指针指向字符串某个元素的地址
//	printf("%s\n", str+1);
//	system("pause");
//	return 0;
//}

//#include <string.h>
//int main()                                           // strlen函数
//{
//	//size_t strlen(const char* str)                 //size_t :无符号整数  
//	char szInput[10];
//	printf("Enter a sentence: ");
//	gets(szInput);                             //输入 ，gets：标准输入
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
//	if (strlen(str2) - strlen(str1) > 0)     //无符号整数-无符号整数=无符号整数，不为0，If为真
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
//	//strcpy        把后者拷给前者，返回值为拷贝完毕之后新字符串的起始地址
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
//	char scr[] = { 'w', 'o', 'r', 'l', 'd' };    //源字符串必须以'\0'结束
//	char dst[16] = { 0 };
//	strcpy(dst, scr);
//	printf("%s", dst);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const char* src = "hello";
//	char dst[16]="i love China";   //会将\0拷入，拷贝后dst数组变为："hello\0 China"
//	strcpy(dst, src);
//	printf("%s\n", dst);          //打印只会打印hello,字符串打印遇\0停止，后面内容不打印
//	printf("%s\n", src);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//strcat     字符串拼接，把后一个拼到前一个后面
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
//	fputs("hello %d\n", stdout);
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

//int main()                              //字符转换
//{
//	char c = tolower('A');
//	printf("%c\n", c);
//	system("pause");
//	return 0;
//}


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
//	int n;                                                  //是将字节转化为ascii码值进行比较
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

//char *MyStrcpy(char* dst, const char* src)            //模拟实现strcpy
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


//char* MyStrcat(char* dst, const char* src)            //模拟实现strcat
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
//	while (*str)                             //确定起始位置
//	{ 
//		const char* p = str;
//		const char* q = sub_str;
//		while (*p && *q && *p == *q)         //局部比较
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
//int main()                                  //模拟实现strstr
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
//int main()                                //模拟实现memcpy
//{                                         //不考虑内存重叠的问题
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
//int main()                                                       //模拟实现memmove
//{                                                                //和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的
//	char dst[16] = "abcd1234";
//	printf("%s\n", MyMemmove(dst + 1, dst, strlen(dst)+1));
//	system("pause");
//	return 0;
//}