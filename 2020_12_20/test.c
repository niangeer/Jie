#include <stdio.h>
#include <Windows.h>
#include <assert.h>

#pragma warning(disable:4996)

//int main()         //ָ������
//{
//	int *arr1[4];  //��������ָ�������
//	char *arr2[4]; //�����ַ�ָ�������
//	char **arr3[4];//�����ַ�ָ�������      //���������ŵ���char**
//	system("pause");
//	return 0;
//}


//void test(int **a)         //��������������ָ���������ָ���������Ԫ�ص�ַ
//{                          //����ָ���������Ԫ��Ϊ����ָ������
//
//}
//int main()
//{
//	int *a[5] = { NULL };
//	test(a);
//	system("pause");
//	return 0;
//}


//void test(int arr[3][5])      //�ܽ���
//void test2(int arr[][])       //���ܽ���
//void test1(int arr[][5])      //�ܽ���
//void test3(int *arr)          //���ܽ���   ��������ָ������
//void test4(int *arr[5])       //���ܽ���   ����ָ�����飬��������ָ�����͵ĵ�ַ������ͬ��test6
//void test5(int(*arr)[5])      //�ܽ���     ��������ָ�룬������������ָ������
//void test6(int **arr)         //���ܽ���   ��������ָ�룬��������ָ�����͵ĵ�ַ
//int main()
//{
//	int arr[3][5] = {0}; //�������鴫�ν�ά��ָ�����ڲ�Ԫ�����͵�ָ�룬��������������ָ��
//	test(arr);
//	system("pause");
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()                           //����ָ����������溯����ַ�ı���
//{                                  
//	printf("%d\n", ADD(10, 20));     //�������ǵ�ַ���Ǻ������ڶ������е���ʼ��ַ
//	int(*p)(int, int) = ADD;         //����ָ������Ŀ���
//	printf("%d\n", (*p)(100, 200)); 
//	printf("%d\n", p(100, 200));     //����ָ�룬p��(*p)�ȼ�
//    printf("%p\n",ADD);              //�������������ĵ�ַ���京����&�������ȼ�
//    printf("%p\n",&ADD);
//	system("pause");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	if (0 == y)
//	{
//		printf("Div zero!\n");
//		return -1;
//	}
//	return x / y;
//}
//void Menu()
//{
//	printf("####################\n");
//	printf("##1,Add      2,Sub##\n");
//	printf("##3,Mul      4,Div##\n");
//	printf("####################\n");
//	printf("Plese select# ");
//}
//#define NUM 5
//int main()                                         //����ָ�����������    ת�Ʊ�
//{
//	int(*p[NUM])(int, int) = {NULL,Add,Sub,Mul,Div};
//	int quit = 0;
//	int select = 0;
//	while (!quit)
//	{
//		Menu();
//		scanf("%d", &select);
//		if (select<1 || select>4)
//		{
//			printf("Enter error,try again!\n");
//			continue;
//		}
//		int x = 0;
//		int y = 0;
//		printf("Please enter tow date# ");
//		scanf("%d %d", &x, &y);
//		int ret = p[select](x, y);
//		printf("result=%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}



//int main()           //ָ���ַ������õĵ�ַ
//{
//	int a = 4;
//	int *p = &a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	printf("%p\n", *p);
//	printf("%p\n", a);
//	system("pause");
//	return 0;
//}


//void Swap(char *str, char *dst, int size)      //ģ��ʵ��qsort����
//{
//	while (size)
//	{
//		char temp = *str;
//		*str = *dst;
//		*dst = temp;
//		str++;
//		dst++;
//		size--;
//	}
//}
//
//int ComInt(const void* _x, const void* _y)
//{
//	int *x = (int *)_x;
//	int *y = (int *)_y;
//	if (*x > *y)
//	{
//		return 1;
//	}
//	else if (*x < *y)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void my_qsort(void* arr, int num, int size, int (*Compar)(const void* x, const void* y))  
//{
//	assert(arr != NULL);                          //Compar�ǵü�*,����ָ��
//	assert(Compar != NULL);
//	char* e = (char*)arr;
//	for (int i = 0; i < num - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (Compar(e + j*size, e + (j + 1)*size)>0)
//			{
//				flag = 1;
//				Swap(e + j*size, e + (j + 1)*size, size);
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
//void show(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 4, 2, 3, 45, 65, 876, 99, 5, 457, 43 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	show(arr, num);		
//	my_qsort(arr, num, sizeof(int), ComInt);
//	show(arr,num);
//	system("pause");
//	return 0;
//}

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


//int main()                                       //sizeof�������������͵Ĵ�С�������Ǳ����Ĵ�С
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));                   //48      ��������
//	printf("%d\n", sizeof(a[0][0]));             //4       ��������ĵ�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));                //16      ����1����һ��һά���飩
//	printf("%d\n", sizeof(a[0]+1));              //4       �ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0]+1)));           //4       �ڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));               //4       ����2�ĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));            //16      ����2
//	printf("%d\n", sizeof(&a[0] + 1));           //4       ����2�ĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));        //16      ����2
//	printf("%d\n", sizeof(*a));                  //16      ����1
//	printf("%d\n", sizeof(a[3]));                //16      ����4��C����������ֻ�Ƕ�ȡû��ʹ�ã�
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}


//int main()                                           //��ͼ���
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}