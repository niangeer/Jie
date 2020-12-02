#include <stdio.h>
#include <Windows.h>
#include <string.h>

#pragma warning(disable:4996)

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

//// strlen函数 
//// size_t strlen(const char* str)   
//// size_t :无符号整数 
//int main()                                          
//{               
//	char szInput[256];
//	printf("Enter a sentence: ");
//	gets(szInput);                             //输入 ，gets：标准输入
//	printf("%s\n", szInput);
//	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
//	system("pause");
//	return 0;
//}


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

////strcpy函数
////	char* strcpy(char* destination, const char* source);
//// 把后者拷给前者，返回值为拷贝完毕之后新字符串的起始地址
//int main()                      
//{ 
//	const char* src = "hello world!";
//	char dst[16];
//	strcpy(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}
//
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
//	char scr[] = { 'w', 'o', 'r', 'l', 'd' };    //源字符串必须以'\0'结束
//	char dst[16] = { 0 };
//	strcpy(dst, scr);
//	printf("%s", dst);
//	system("pause");
//	return 0;
//}

////strcat     字符串拼接，把后一个拼到前一个后面
////char* strcat(char* destination,const char* source);
//int main()
//{
//	const char *src = "world!";
//	char dst[16] = "hello ";
//	strcat(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}


//strcmp  第一字符串大于第二字符串，则返回大于0的数；反之，返回小于0的数；相等返回0
//int strcmp(const char* str1, const char* str2);

//int main()
//{
//	printf("%d\n", strcmp("abc", "abc"));
//	printf("%d\n", strcmp("abcd", "abd"));
//	printf("%d\n", strcmp("abxy", "ab12"));
//	printf("%d\n", strcmp("abcd", "abcdef"));
//	system("pause");
//	return 0;
//}