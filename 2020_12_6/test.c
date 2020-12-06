#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int MyStrlen(char* str)            //方法一   
//{                                  
//	if (str == NULL)
//	{
//		return 0;
//	}
//	int len = 0;                    //数组创建时;int a=4; char str[a]={1,2,3,4};  无效，即[]中不能使用变量
//	while (*str != '\0')            // 创建时无效，后面使用：printf（"%d\n",str[a]）;有效    
//	{                               //字符串存储;方法一；char str[]="abcd1234";
//		len++;                      //           方法二；char* str="abcd1234";
//		str++;
//	}
//	return len;
//}
//int main()
//{
//	char* str =  "abcd1234" ;    //char str[]="abcd1234";
//	printf("%d\n", MyStrlen(str));
//	system("pause");
//	return 0;
//}



//int MyStrlen(char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	return end - str;         //指针-指针的运用
//}
//int main()                    //指针自建strlen
//{
//	const char* str = "abcd1234";
//	int len = MyStrlen(str);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}


//int MyStrlen(char str[])              
//{
//	int len = 0;  
//	for (; str[len] != '\0';)           //len若是在for循环里创建，return len; 无效
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char str[] = "abcd1234";
//	printf("%d\n", MyStrlen(str));
//	system("pause");
//	return 0;
//}



//int MyStrlen(char str[])          //strlen 函数递归求法
//{
//	if (*str == '\0')
//	{
//		return 0;
//	} 
//	return 1 + MyStrlen(str + 1);
//}
//int main()
//{
//	char str[] = "abcd1234";
//	printf("%d\n",MyStrlen(str));
//	system("pause");
//	return 0;
//}

