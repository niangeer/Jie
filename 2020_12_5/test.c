#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));         //16  ��������
//	printf("%d\n", sizeof(a+0));       //4   ָ������
//	printf("%d\n", sizeof(*a));        //4   ��Ԫ�ص�ַ�����ã��������ͣ�
//	printf("%d\n", sizeof(a+1));       //4   �ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));      //4   �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));        //4   ����ָ��
//	printf("%d\n", sizeof(*&a));       //16  ������ָ������ã��������ͣ�
//	printf("%d\n", sizeof(&a+1));      //4   ����ָ��
//	printf("%d\n", sizeof(&a[0]));     //4   ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0]+1));   //4   �ڶ���Ԫ�ص�ַ
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(a));                       //6      ��������
//	printf("%d\n", sizeof(a + 0));                   //4      ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));                      //1      ��Ԫ�ص�ַ�����ã���һ��Ԫ�أ��ַ����ͣ�
//	printf("%d\n", sizeof(a[1]));                    //1      �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));                      //4      ����ָ��
//	printf("%d\n", sizeof(&a + 1));                  //4      ����ָ��
//	printf("%d\n", sizeof(&a[0] + 1));               //4      �ڶ���Ԫ�ص�ַ
//	system("pause");
//	return 0;
//}

//int main()
//{
//  //size_t strlen(const char* str);
//	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(a));                   //6+���             ��������   
//	printf("%d\n", strlen(a + 0));               //6+���             ��Ԫ�ص�ַ
////	printf("%d\n", strlen(*a));                  //����               ��һ��Ԫ�أ��ַ�����
////	printf("%d\n", strlen(a[1]));                //����               �ڶ���Ԫ�أ��ַ�����
//	printf("%d\n", strlen(&a));                  //warning��6+���    ����ָ������
//	printf("%d\n", strlen(&a + 1));              //warning�����      ����ָ������
//	printf("%d\n", strlen(&a[0] + 1));           //5+���             �ڶ���Ԫ�ص�ַ
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));           //7    ��������
//	printf("%d\n", sizeof(a + 0));       //4    ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));          //1    ��һ��Ԫ��
//	printf("%d\n", sizeof(a[1]));        //1    �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));          //4    ����ָ��
//	printf("%d\n", sizeof(&a + 1));      //4    ����ָ��
//  	printf("%d\n", sizeof(&a[0] + 1));   //4    �ڶ���Ԫ�ص�ַ
//	system("pause");
//	return 0;
//}


//int main()
//{
//  //size_t strlen(const char* str);
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));              //6                  ��������
//	printf("%d\n", strlen(a + 0));          //6                  ��Ԫ�ص�ַ
//	//printf("%d\n", strlen(*a));             //����             ��Ԫ�أ��ַ�����
//	//printf("%d\n", strlen(a[1]));           //����             �ڶ���Ԫ�أ��ַ�����
//	printf("%d\n", strlen(&a));             //warning��6         ����ָ��
//	printf("%d\n", strlen(&a + 1));         //warning�����      ����ָ��
//	printf("%d\n", strlen(&a[0] + 1));      //5                  �ڶ���Ԫ�ص�ַ
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char* a = "abcdef";
//	printf("%d\n", sizeof(a));               //4      ָ���ַ�����ָ��
//	printf("%d\n", sizeof(a + 1));           //4      ָ���ַ����ڶ���Ԫ�ص�ָ��
//	printf("%d\n", sizeof(*a));              //7      ���Ϊ1��û���ַ������ͣ�*aΪ�ַ�a����Ԫ�أ�
//	printf("%d\n", sizeof(a[0]));            //1      ��Ԫ��
//	printf("%d\n", sizeof(&a));              //4      ����ָ������
//	printf("%d\n", sizeof(&a + 1));          //4      ����ָ������
//	printf("%d\n", sizeof(&a[0] + 1));       //4      �ڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(&a)));           //4      ָ�����ͣ����Ϊaָ��
//	system("pause");
//	return 0;
//}


//int main()
//{
//  //size_t strlen(const char* str);
//	char* a = "abcdef";
//	printf("%d\n", strlen(a));             //6                ָ���ַ�����ָ��
//	printf("%d\n", strlen(a + 1));         //5                ָ��ڶ���Ԫ�ص�ָ��
//	//printf("%d\n", strlen(*a));            //����           ��һ��Ԫ��
//	//printf("%d\n", strlen(a[0]));          //����           ��һ��Ԫ��
//	printf("%d\n", strlen(&a));            //warning�����    ����ָ��
//	printf("%d\n", strlen(&a + 1));        //warning�����    ����ָ��
//	printf("%d\n", strlen(&a[0] + 1));     //5                �ڶ���Ԫ�صĵ�ַ
//	system("pause");
//	return 0;
//}


int main()                                       //sizeof�������������͵Ĵ�С�������Ǳ����Ĵ�С
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));                   //48      ��������
	printf("%d\n", sizeof(a[0][0]));             //4       ��������ĵ�һ��Ԫ��
	printf("%d\n", sizeof(a[0]));                //16      ����1����һ��һά���飩
	printf("%d\n", sizeof(a[0]+1));              //4       �ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0]+1)));           //4       �ڶ���Ԫ��
	printf("%d\n", sizeof(a + 1));               //4       ����2�ĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));            //16      ����2
	printf("%d\n", sizeof(&a[0] + 1));           //4       ����2�ĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));        //16      ����2
	printf("%d\n", sizeof(*a));                  //16      ����1
	printf("%d\n", sizeof(a[3]));                //16      ����4��C����������ֻ�Ƕ�ȡû��ʹ�ã�
	system("pause");
	return 0;
}