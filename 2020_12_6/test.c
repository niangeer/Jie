#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int MyStrlen(char* str)            //����һ   
//{                                  
//	if (str == NULL)
//	{
//		return 0;
//	}
//	int len = 0;                    //���鴴��ʱ;int a=4; char str[a]={1,2,3,4};  ��Ч����[]�в���ʹ�ñ���
//	while (*str != '\0')            // ����ʱ��Ч������ʹ�ã�printf��"%d\n",str[a]��;��Ч    
//	{                               //�ַ����洢;����һ��char str[]="abcd1234";
//		len++;                      //           ��������char* str="abcd1234";
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
//	return end - str;         //ָ��-ָ�������
//}
//int main()                    //ָ���Խ�strlen
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
//	for (; str[len] != '\0';)           //len������forѭ���ﴴ����return len; ��Ч
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



//int MyStrlen(char str[])          //strlen �����ݹ���
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

