#include <stdio.h>
#include <Windows.h>
#include <ctype.h>
#include <string.h>

#pragma warning(disable:4996)

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
//{                                  //void * memset��void * ptr��intֵ��size_t num��;
//	int a[5] = { 0 };              //����ڴ�飬���ֽ�Ϊ��λ������������Ҳ�����Ա���λΪ��λ
//	memset(a, 1, sizeof(a));       //ÿ������ת��Ϊ0000 0001 0000 0001 0000 0001 0000 0001
//	system("pause");
//	return 0;
//}