#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//int main()
//{
//	int a = 10;
//	int *p = &a;
////	p = 100;             //��100�����ַ����P�������P����ָ��a,ָ��100�ŵ�ַ-----�Ƿ�����
//	*p = 100;            //a=100;
//	system("pause");
//	return 0;
//}

//int main()                  //ָ��Ӽ�����
//{                           //ָ�붨�壺type+*
//	int arr[10] = { 0 };      //��ָ���1����ʵ�Ǽ���ָ����ָ�����͵Ĵ�С������+sizeof(type)
//	int *pi = arr;            //����ָ�뼰����ָ��֮��ָ���1����Ϊ����4������ָ������
//	short *ps = (short*)arr;
//	char *pc = (char*)arr;
//	printf("######################\n");
//	printf("%p\n", arr);
//	printf("%p\n", pi);
//	printf("%p\n", ps);
//	printf("%p\n", pc);
//	printf("######################\n");
//	printf("%p\n", pi+1);
//	printf("%p\n", ps+1);
//	printf("%p\n", pc+1);
//	printf("######################\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;    //�˵���ΪС�˴洢��ССС
//	char *p = (char*)&a;
//	int *q = &a;
//	*p = 0x55;            //ֻ��ı�һ���ֽ�
//	*q = 0;               //�ı�4���ֽ�
//	system("pause");
//	return 0;
//}



//int MyStrlen(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	const char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	return end - str;         //ָ��-ָ�������
//}
//int main()                 
//{
//	const char* str = "abcd1234";
//	int len = MyStrlen(str);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//int main()              //��ָ��������������ָ��֮����������Ԫ�صĸ�����Ԫ�ص�������ָ�����
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int *q = &arr[9];
//	printf("%d\n", q - p);     //9
//	short *a = (short*)arr;
//	short *b = (short*)&arr[9];
//	printf("%d\n", b - a);     //18
//	char *c = (char*)arr;
//	char *d = (char*)&arr[9];
//	printf("%d\n", d - c);     //36
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);          //�������һ��Ѱַ
//		printf("%d ", *(arr + i));      //�������һ��Ѱַ
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[5] = { 0 };
//	int *p[5] = { NULL };      //ָ�����飬���ָ�������
//	//int(*p)[5];              //����ָ������    ����ָ�룬ָ�������ָ��   
//	int(*q)[5] = &a;           //����ָ�����    //�����һά�����ַ���൱�ڶ�ά���鴫��
//	system("pause");
//	return 0;
//}