#include <stdio.h>
#include <Windows.h>
#include <string.h>

#pragma warning(disable:4996)

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

//// strlen���� 
//// size_t strlen(const char* str)   
//// size_t :�޷������� 
//int main()                                          
//{               
//	char szInput[256];
//	printf("Enter a sentence: ");
//	gets(szInput);                             //���� ��gets����׼����
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

////strcpy����
////	char* strcpy(char* destination, const char* source);
//// �Ѻ��߿���ǰ�ߣ�����ֵΪ�������֮�����ַ�������ʼ��ַ
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
//	char dst[16]="i love China";   //�Ὣ\0���룬������dst�����Ϊ��"hello\0 China"
//	strcpy(dst, src);
//	printf("%s\n", dst);          //��ӡֻ���ӡhello,�ַ�����ӡ��\0ֹͣ���������ݲ���ӡ
//	printf("%s\n", src);
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

////strcat     �ַ���ƴ�ӣ��Ѻ�һ��ƴ��ǰһ������
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


//strcmp  ��һ�ַ������ڵڶ��ַ������򷵻ش���0��������֮������С��0��������ȷ���0
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