#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)

//int Fact(int n)            //�׳�
//{
//	int result = 1;
//	for (int i = n; 1 <= i; i--)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//int main()
//{
//	int n = 5;
//	int result = Fact(n);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}


//int Fact(int n)               //�׳����
//{
//	int result = 1;
//	for (int i = n; i >= 1; i--)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//int FactSum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += Fact(i);
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 5;
//	int total = FactSum(n);
//	printf("%d\n",total);
//	system("pause");
//	return 0;
//}



//#define NOT_FOUND -1               //���ֲ��ң��۰���ң�
//int BinSearch(int arr[], int num, int n)
//{
//	int left = 0;
//	int right = num - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left=mid+1;
//		}
//		else if (arr[mid]>n)
//		{
//			right=mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return NOT_FOUND;
//}
//int main()
//{
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
//	int n = 99;
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int index = BinSearch(arr, num, n);
//	printf("index=%d\n", index);
//	system("pause");
//	return 0;
//}



//void show()
//{
//	char content[] = "hello world,hello china";   //content:����
//	char lable[]   = "#######################";   //lable:  ��ǩ
//	int len = strlen(content);
//	int start = 0;
//	int end = 0;
//	printf("%s\n", lable);
//	for (start=0,end=len-1; start <= end;start++,end--)
//	{
//		lable[start] = content[start];
//		lable[end] = content[end];
//		Sleep(1000);
//		printf("%s\r", lable);        //r:�س�
//	}
//}
//int main()
//{
//	show();
//	printf("\n");
//	system("pause");
//	return 0;
//}


//#define NAME "tom"                    //�û���¼
//#define PASSWORD "123456"
//int Login(int times)
//{
//	char name[64] = { 0 };
//	char password[64] = { 0 };
//	int ret = -1;
//	do
//	{
//		printf("����������# ");
//		scanf("%s", name);
//		printf("����������# ");
//		scanf("%s", password);
//		if (strcmp(name, NAME) == 0 && strcmp(password, PASSWORD) == 0)
//		{
//			ret = 1;
//			break;
//		}
//		else
//		{
//			times--;
//			printf("�㻹ʣ%d�λ���\n", times);
//			if (0 == times)
//			{
//				printf("��Ҫ%d�������ٴγ���\n", 3);
//				Sleep(3000);
//				times = 3;
//			}
//		}
//	} while (1);
//	return ret;
//}
//int main()
//{
//	int times = 3;
//	int result = Login(times);
//	if (1 == result)
//	{
//		printf("��¼�ɹ�\n");
//	}
//	else
//	{
//		printf("��¼ʧ��\n");
//	}
//	system("pause");
//	return 0;
//}


//int main()                                 //cmd����
//{
//	printf("��ĵ��Խ��������Ӻ�ػ�����Ҫȡ���ػ������롰������\n��");
//	system("shutdown -s -t 30");
//	char input[64] = { 0 };
//	while (1)
//	{
//		printf("���ϰ�# ");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�ػ���ȡ��\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	printf("��ĵ��Խ��������Ӻ�ػ�����Ҫȡ���ػ������롰������\n");
//	system("shutdown -s -t 120");         
//	char input[64] = { 0 };
//Start:
//	printf("���ϰ�# ");
//	scanf("%s", input);                      //scanf����"%s"�ﲻ�ܼ�\n��
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ���ȡ��\n");
//		
//	}
//	else
//	{
//		printf("�����������������\n");
//		goto Start;
//	}
//	system("pause");
//	return 0;
//}



//void swap(int* a, int* b)        //��������
//{
//	int z = *a;
//	*a = *b;
//	*b = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d ,%d\n ", a, b);
//	system("pause");
//	return 0;
//}


//int MyMax(int a, int b)      
//{
//	return a > b ? a : b;        //�����ȴ�С
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = MyMax(a, b);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}



//void MyMax(int a, int b)
//{
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("%d\n", b);
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//    MyMax(a, b);
//	system("pause");
//	return 0;
//}


//int IsPrimeNumber(int n)            //����������1����ֻ�ܱ�������1����������
//{                                   //�ο�
//	for (int i = 2; i < n; i++)       //i<=n/2��i<(int)sqrt(n)
//	{                                 //i=2;
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 2; i <= 1000; i++)
//	{
//		int ret = IsPrimeNumber(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//int IsPrimeNumber(int n)            //��д
//{
//	int ret = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 2; i <= 1000; i++)
//	{
//		int ret = IsPrimeNumber(i);
//		if (1 == ret)
//		{
//			printf("%d  ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int IsLeapYear(int year)                                //���꣬�ο�
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	for (int year = 1; year <= 2020; year++)
//	{
//		int ret = IsLeapYear(year);
//		if (1 == ret)
//		{
//			printf("%d  ", year);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//void IsLeapYear(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d  ",i);
//		}
//	}
//
//}
//int main()
//{
//	int i = 2020;
//	IsLeapYear(i);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int IsLeapYear(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	for (int year = 1; year <= 2020; year++)
//	{
//		int ret = IsLeapYear(year);
//		if (1 == ret)
//		{
//			printf("%d  ", year);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
                                                  
//#define Not_Found -1                           //���ֲ��ң��۰���ң�
//int BinSearch(int num, int arr[], int n)       //int mid=left+((right-left)>>1);   
//{
//	int left = 0;
//	int right = num - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return Not_Found;
//}
//
//int main()
//{
//	int n = 66;
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinSearch(num, arr, n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//void Inc(int* count)     //ÿ�ε��ñ���һ
//{
//	(*count)++;
//}
//int main()
//{
//	int count = 10;
//	for (int i = 0; i < 10; i++)
//	{
//		Inc(&count);
//		printf("count=%d\n", count);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 1234;
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	system("pause");
//	return 0;
//}


//void PrintInt(int n)
//{
//	if (n > 10)
//	{
//		PrintInt(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 1234;
//	PrintInt(n);
//	system("pause");
//	return 0;
//}

//int MyStrlen(char* str)           //strlen����������   
//{                                 //char str[]="����"     
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

//void Int(int a)
//{
//	if (a > 9)
//	{
//		Int(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 10234;
//	Int(a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10234;
//	int i = 5;
//	while (i > 0)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//		i--;
//	}
//	system("pause");
//	return 0;
//}

//int Fact(int a)          //�����ݹ鷨��׳�
//{
//	if (a <= 2)
//	{
//		return a;
//	}
//	return a*Fact(a - 1);
//}
//int main()
//{
//	/*int a = 4;*/
//	printf("%d\n", Fact(5));
//	system("pause");
//	return 0;
//}


//int Fib(int n)             //쳲��������У������ݹ���
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	printf("%d\n", Fib(8));
//	system("pause");
//	return 0;
//}



//int Fib(int n)                               //쳲��������У�������
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	for (;n>2;n--)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//	}
//	return third;
//}
//int main()
//{
//	printf("%d\n", Fib(6));
//	system("pause");
//	return 0;
//}




//int main()                           //����ĸ�ֵ
//{
//	int arr[10] = { 0 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < num; i++)
//	{
//		arr[i] = i;
//		
//	}
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//int main()                                                  //��ά����ĸ�ֵ����
//{
//	int arr[3][4] = {0};
//	/*int num = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", num);*/
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;          //arr[i][j]=i*4+j;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()          //��ά�������ڴ���Ҳ�������洢���ӵ͵�ַ���ߵ�ַ
//{
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}

//void show(char arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("arr[%d]:%d %p\n", i, arr[i], &arr[i]);
//	}
//}
//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	show(arr, num);
//	system("pause");
//	return 0;
//}

//void show(char* arr, int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("arr[%d]:%d %p\n", i, *(arr + i), arr + i);
//	}
//}
//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	show(arr, num);
//	system("pause");
//	return 0;
//}



//void BubbleSort(int arr[], int num)        //ð������
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
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
//}
//int main()
//{
//	int arr[] = { 100,99,88,77,66,55,44,33,22,11,};
//	int num = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, num);
//	show(arr,num);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//void Print(char arr[])            
//{
//	while (*arr)                       //*arr����'\0'��while�ж�����Ϊ�٣�����ѭ��
//	{
//		printf("%c ", *arr);
//		arr++;
//	}
//}
//int main()
//{
//	char arr[] = { "abcd1234" };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Print(arr);
//	system("pause");
//	return 0;
//}

//int main()             
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", sizeof(arr));            //������������
//	printf("%d\n", sizeof(arr + 1));//������������еڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(arr)+1);          //������������
//	printf("%p\n", &arr[0]);          
//	printf("%p\n", &arr[0] + 1);    //������������еڶ���Ԫ�ص�ַ
//	printf("%p\n", arr + 1);         //������������еڶ���Ԫ�ص�ַ
//	printf("%p\n", &arr + 1);               //������������
//	system("pause");
//	return 0;
//}


//int main()                      //P��ŵ���a�ĵ�ַ
//{                               //pҲ���Լ��ĵ�ַ
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%p\n", &p);
//	system("pause");
//	return 0;
//}



//int main()
//{                                            //:���Ϊ16
//	int arr[] = { 1, 2, (3, 4), 5 };         //(3,4):���ű��ʽ������Ϊ4���ܹ�Ϊ�ĸ�Ԫ��
//	printf("%d\n", sizeof(arr));             //sizeof(arr):������������ռ�ռ��С
//	system("pause");
//	return 0;
//}


//int main()                                              //���Ϊ10 9��
//{                                                       //sizeof(str)����ȡ������ܴ�С��10��Ԫ��
//	char str[] = "hello bit";                           //strlen(str): ��ȡ�ַ�������Ч�ַ��ĸ���������'\0'
//	printf("%d %d\n", sizeof(str), strlen(str));
//	system("pause");
//	return 0;
//}


//int main()                                                     //����acX�ĳ��ȴ�������acY�ĳ���
//{
//	char acX[] = { "abcdefg" };
//	char acY[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	system("pause");
//	return 0;
//}


//void Swap(int* a, int* b)                           //��������ʱ��������������������ʵ����������
//{
//	*a = (*a) ^ (*b);
//	*b = (*a) ^ (*b);
//	*a = (*a) ^ (*b);
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


//void Swap(int a, int b)            //δ��ɽ���
//{
//	a = a^b;
//	b = a^b;
//	a = a^b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	printf("%d %d\n", a,b);
//	system("pause");
//	return 0;
//}

//int Getone(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (1 == a % 2)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
//int main()                  //��һ�������洢���ڴ��еĶ�����1�ĸ���
//{                           //�˴���ȱ�ݣ��������ڸ���
//	int a = 0xFFEE;
//	int count = Getone(a);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

//int Getone(int a)         //��һ�������洢���ڴ��еĶ�����1�ĸ���
//{                         //�˴���ȱ�ݣ��������ڸ���
//	int count = 0;
//	while (a)
//	{
//		if (a & 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 10;
//	int count = Getone(a);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}


//int Getone(a)
//{
//	int count = 0;
//	int i = 32;
//	while (i > 0)
//	{
//		if (a & (1<<31))              //if(a&1)
//		{
//			count++;
//		}
//		a <<= 1;                      //a>>=1;
//		i--;
//	}
//	return count;
//}
//int main()                         //��һ�������洢���ڴ��еĶ�����1�ĸ���
//{                                  //�����ڸ���
//	int a = -1;
//	int count = Getone(a);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}


//int Getone(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x&(x - 1);
//		count++;
//	}
//	return count;                 
//}                               //���
//int main()                      //��һ�������洢���ڴ��еĶ�����1�ĸ���
//{                               //�����ڸ���
//	int x = -1;
//	int ret = Getone(x);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	system("pause");
//	return 0;
//}

//int main()                 //���üӼӼ���
//{
//	int a = 10;
//	int b = a--;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


//int main()         //()ǿת����
//{
//	double d = 3.14;
//	int i = (int)d;
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char* s = "123456789";
//	int a = (int)s;            //��Ԫ�ص�ַתΪ���͸�ֵ��a
//	printf("%d\n", a);         //(int)*s  ��ֵ�ַ���1��
//	system("pause");
//	return 0;
//}

//int main()                    
//{
//	int a, b, c, d;
//	int i = (1, a = 0, b = 2, c = 3, d = 4);
//	i = a++ && ++b && d++;                        //a++:��ʹ�ú�Ӽӣ�0Ϊ�١����治ִ�С�
//	printf("%d %d %d %d %d\n", i, a, b, c, d);    //��Ϊ||�����ٲŲ�ִ��
//	system("pause");
//	return 0;

//int main()
//{
//	int a = 10;
//	int b = a == 10 ? 20 : 30;           //��Ŀ������
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}


//int main()                      //���ΪC=13�����ű��ʽ������һ
//{
//	int a = 1;
//	int b = 2;
//	int c = ( a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//int main()                       //���ű��ʽ�������
//{
//	if (a = b + 1, c = a / 2, d > 0);
//	system("pause");
//	return 0;
//}

//int main()                         //���ű��ʽ��������
//{                                  //���ö��ű��ʽ����Ϊ��while (a = get_val(), count_val(a), a > 0)
//	a = get_val();                   //                      {
//	count_val(a);                    //                       }
//	while (a > 0)
//	{
//		a = get_val();
//		count_val(a);
//	}
//	system("pause");
//	return 0;
//}

//int main()                      //��ʽ����ת��--��������
//{                               //���ձ������������͵ķ���λ������
//	signed char a = -1;         //1111 1111
//	printf("%d\n", a);          //1111 1111 1111 1111 1111 1111 1111 1111
//	printf("%u\n", a);          //1111 1111 1111 1111 1111 1111 1111 1111
//	unsigned char c = -1;
//	printf("%d\n", c);          //0000 0000 0000 0000 0000 0000 1111 1111
//	printf("%u\n", c);          //0000 0000 0000 0000 0000 0000 1111 1111
//	system("pause");
//	return 0;
//}

//int main()                  //ֻ��ӡC
//{
//	char a = 0xb6;            //a����Ϊ 1111 1111 1111 1111 1111 1111 1011 0110
//	short b = 0xb600;      //0xb6����Ϊ 0000 0000 0000 0000 0000 0000 1011 0110
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}

//int main()                        //��������һ��������������߼�����ȿ�ƽ̨
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));   //1
//	printf("%d\n", sizeof(+c));  //4 �������㣬��������
//	printf("%d\n", sizeof(~c));  //4 �������㣬��������
//	printf("%d\n", sizeof(!c));  //1
//	system("pause");
//	return 0;
//}

//���ʽ��ֵ��<1>��ʽ����ת��������������<2>����ת��
/*long double           //�����ϵͣ�ת������һ���������ͺ�������
double
float
unsigned long int
long int 
unsigned int 
int*/ 

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	p = 100;             //��100�����ַ����P�������P����ָ��a,ָ��100�ŵ�ַ
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

//int main()              //��ָ��������������ָ��֮����������Ԫ�صĸ�����Ԫ�ص�������ָ�����
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int *q = &arr[9];
//	printf("%d\n", q - p);    
//	short *a = (short*)arr;
//	short *b = (short*)&arr[9];
//	printf("%d\n", b - a);
//	char *c = (char*)arr;
//	char *d = (char*)&arr[9];
//	printf("%d\n", d - c);
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
//	int *p[5];      //ָ�����飬���ָ�������
//	//int(*p)[5];     //����ָ�룬ָ�������ָ��
//	int(*q)[5] = &a; //����ָ�����ͣ�����ָ�����    //�����һά�����ַ���൱�ڶ�ά���鴫��
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char arr[3][4] = { "12" ,"34","56"};     //��ά����ĳ�ʼ��
//	char(*p)[4] = arr;          
//	for (int i = 0; i < 3; i++)              //��ά���������ֵ
//	{                                        //12��Ԫ�أ�i�ɵ�11     //pָ���ά�����׵�ַ,*p�����ã�����������ĵ�һ����
//		 //*p[i] = 0;        //*p[0]���������ָ����Ԫ����ĵ�һ��Ԫ�أ�*p[1]���������ָ��ڶ�������ĵ�һ��Ԫ��  
//		(*p)[i] = 0;                    //(*p)[0]������������������һ��Ԫ�أ�һ��12��Ԫ��
//	}                                     
//	system("pause");
//	return 0;
//}

//int main()                       //һά���飬���������Ƚ϶�ά����
//{
//	char arr[] = "123";
//	char* p = arr;
//	for (int i = 0; i < 3; i++)
//	{
//		 p[i]=0;
//	}
//	system("pause");
//	return 0;
//}

//struct Book               //�Զ�������ͣ���ʡ��Book����Ϊ����    //�ṹ��
//{
//	char name[20];          //�ṹ��ĳ�Ա����
//	int price;
//};                       //�˴����Լӱ�����
//int main()
//{
//	struct Book a = { "C���Գ������", 15 };  //�Զ���ı���
//	struct Book *p = &a;                      //�ṹ��ָ��Ķ��壬�Զ�������+*
//	printf("%s\n", a.name);
//	printf("%d\n", a.price);
//	printf("%s %d\n", a.name, a.price);
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).price);
//	printf("%s\n", p->name);
//	printf("%d\n", p->price);
//	a.price = 20;                        //(*p).price=20;   p->price = 20;
//	printf("%d\n", p->price);
//	system("pause");
//	return 0;
//}



//struct stu { char name[20]; int age; }a = {"tom",16};  //������д��������int ���ͱȽ�һ��
////struct stu { char name[20]; int age; }a ,*p;
//int main()
//{
//	struct stu *p = &a;
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	int age;
//	char name[20];	
//	char sex;
//}stu,*p;
//int main()
//{
//	printf("%p\n", &stu);         //�����ṹ��ĵ�ַ
//	printf("%p\n", &(stu.age));   //ȡ���ṹ���Ա��age�ĵ�ַ
//	printf("%p\n", &stu + 1);     
//	printf("%p\n", &(stu.age) + 1);  
//	system("pause");
//	return 0;
//}


//struct stu
//{ 
//	char buff[5];
//};
//
//void show(struct stu s)
//{
//	printf("show:%d, %p\n", sizeof(s), &s);    //�ṹ�崫�β�������ά����ַ�봫��ǰ��ͬ
//}
//int main()
//{
//	struct stu s;
//	printf("main:%d, %p\n", sizeof(s), &s);  
//	show(s);
//	system("pause");
//	return 0;
//}


//typedef unsigned long long ull;              //typedef���÷���������������
//int main()
//{
//	ull x = 100;
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}


//void Show(int *p, int num)           //ͷ�ļ�<assert.h>,��Ϊ������벻����ִ��
//{
//	assert(p != NULL);                 //if(NULL==p) {return;} 
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	p = NULL;
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Show(p, num);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = NULL;
//	p = &a;
//	printf("%d\n", a);
//	if (p != NULL)         //ʹ��ָ��������жϸ�ָ�벻ΪNULL
//	{
//		*p = 20;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//char* strcpy(char* dst, const char* src)          //strcpy�����Ĵ���
//{
//	char* cp = dst;
//	assert(cp && src);
//	while (*cp++ = *src++)
//		;
//	return (dst);
//}


//char* strcpy(char* dst,const char* src)
//{
//	char* cp = dst;
//	assert(cp&&src);
//	while (*cp++ = *src++)
//		;
//	return (dst);
//}


//int main()
//{
//	const int a = 10;       //const���α���a,a����ֱ�ӱ��޸ģ��ɼ���޸�
//	//a = 20;
//	int *p = (int *)&a;     //&a��������Ϊint *,��Ϊa��const���Σ����Ա�Ϊconst int * 
//	*p = 20;                //pΪint *���ͣ�������ǿת
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	const int *p = &a;    //const ����*�����Բ��ɽ�����
//	//*p = 20;
//	int *const q = &a;    //const ����q������q����ֱ���޸�
//	//q = NULL;
//	system("pause");      //const int *const p=&a; ����������ֱ���޸�
//	return 0;
//}

//int main()
//{
//    int a = 10;
//	const int * p = &a;
//	const int** q = &p;
//	*q = 100;              //*q����p
//	//**q = NULL;          //const����**������ֱ���޸�
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	int **q = &p;
//	printf("%p\n", p);
//	printf("%p\n", *p);
//	printf("%p\n", q);
//	printf("%p\n", *q);
//	printf("%p\n", **q);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int *const p = &a;  
//	//p = 20;
//	*p = 20;             //const������a��p ����Ȼ���Խ�����
//	system("pause");
//	return 0;
//}

//int MyStrlen(const char *p)              //MyStrlen����
//{
//	int count = 0;
//	assert(NULL != p);
//	while (*p)
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	const char* p = "abcd1234";
//	int len = MyStrlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//int Mystrlen(const char* p)
//{
//	assert(NULL != p);
//	const char* str = p;
//	while (*str)
//	{
//		str++;
//	}
//	return str - p;
//}
//int main()
//{
//	const char *p = "abcd";
//	char arr[] = "abcd";
//	int len = Mystrlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a = 10;          //0000 1010
//	                       // 0    A
//	char q = -10;         //1111 0110
//	                       // F    6
//	unsigned char x = -1;  //�����255��unsigned char����ȡֵΪ0~255
//	signed char;           //1000 0000  (-0)�涨Ϊ-128��ȡֵΪ-128~127
//	system("pause");
//	return 0;
//}

//int check_sys()
//{
//	int i = 257;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 9;               
//	float* fp =(float*) &n;
//	printf("%d\n", n);       //0000 0000 0000 0000 0000 0000 0000 1001
//	printf("%f\n", n);       //0 00000000 0000 0000 0000 0000 0000 000  //�м���Ϊ127
//	printf("%f\n", *fp);     //S     E               M
//	float b = 9.0;
//	*fp = 9.0;               //1001 = 1.001*2^3   S=0  E=3  M=001
//	printf("%d\n", b);       //0 10000010 0010 0000 0000 0000 0000 000
//	printf("%f\n", b);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 9;
//	float b = 9.0;
//	float* fp = (float*)&a;	
//	printf("%d\n", a);        
//	*fp = 9.0;
//	printf("%f\n", a);        
//	printf("%d\n", b);        
//	printf("%f\n", b);       
//	printf("%d\n", a);       
//	system("pause");
//	return 0;
//}


//int main()               
//{
//	char c = 'a';      //ջ�Ͽ��٣��洢��ջ��
//	char *p = &c;
//	char *q = 'd';     //��ָ�������ջ�Ͽ��٣����ַ��洢���ַ�������
//	*q = 'c';
//	char *str = "abcd1234";  //��ָ�������ջ�Ͽ��٣����ַ����洢���ַ�������
//	*str = "egate";
//  const char* arr="asda1234"     //const����*������ָ��ָ������ݲ��ɸ�
//	printf("%s", str);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if (str1 == str2)               //�������Ԫ�ص�ַ
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("2");
//	}
//	if (str3 == str4)           //���ַ�������ֻ�洢һ����ͬ������
//	{
//		printf("3");
//	}
//	else
//	{
//		printf("4");
//	}
//	system("pause");
//	return 0;
//}

//int main()         //ָ������
//{
//	int *arr1[4];  //��������ָ�������
//	char *arr2[4]; //�����ַ�ָ�������
//	char **arr3[4];//�����ַ�ָ�������      //���������ŵ���char**
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a = -128;     
//	printf("%u\n", a); //��������Ϊ1111 1111 1111 1111 1111 1111 1000 0000 ������%u��ӡ
//	system("pause");
//	return 0;
//}

//int main()
//{
//	signed char a = -1;
//	unsigned char c = -1; //�ȴ��룬������ʱ�ȿ����ͷ����������������ٿ������ʽ
//	printf("%d\n", a);
//	printf("%u\n", a);
//	printf("%d\n", c);     //0000 0000 0000 0000 0000 0000 1111 1111
//	printf("%u\n", c);     //0000 0000 0000 0000 0000 0000 1111 1111
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int c = 9.0;
//	float d = 9;
//	float e = 9.0;
//	printf("%d\n", a);
//	printf("%f\n", a);
//	printf("%d\n", c);
//	printf("%f\n", c);
//	printf("%d\n", d);
//	printf("%f\n", d);
//	printf("%d\n", e);
//	printf("%f\n", e);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	float c = 9.0;
//	float* pa = (float*)&a;
//	*pa = 9.0;
//	printf("%d\n", a);
//	printf("%d\n", c);
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
//  printf("%p\n",ADD);              //�������������ĵ�ַ���京����&�������ȼ�
//  printf("%p\n",&ADD);
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


//int main()
//{
//	int a = 9;
//	float c = (float)a;       //��a����ǿ��ת��Ϊfloat���ʹ��c��a�������Ͳ���
//	printf("%f\n", a);
//	printf("%f\n", c);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char c = 'a';
//	int a = (int)c;          //��c��������ǿ��ת��Ϊint ���ʹ��a
//	int d = 97;
//	printf("%d\n", a);
//	printf("%c\n", a);
//	printf("%c\n", d);
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
//	printf("##################\n");
//	printf("##1,Add    2,Sub##\n");
//	printf("##3,Mul    4,Div##\n");
//	printf("##################\n");
//	printf("Please select# ");
//}
//
//#define NUM 5
//
//int main()
//{
//	int(*p[NUM])(int, int) = { NULL, Add, Sub, Mul, Div };
//	int quit = 0;
//	int select = 0;
//	while (!quit)
//	{
//		Menu();
//		scanf("%d", &select);
//		if (select<1 || select>4)
//		{
//			printf("select error,try again!\n");
//			continue;
//		}
//		int x = 0;
//		int y = 0;
//		printf("enter two data# ");
//		scanf("%d %d", &x, &y);
//		int ret = (*p[select])(x,y);
//		printf("%d\n", ret);
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

//int CompInt(const void* _x, const void* _y)
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

//void show(int arr[],int num)         
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()                          //qsort����
//{
//	int arr[] = { 5, 8, 3 , 55, 11, 99, 9, 10, 19, 24 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	show(arr, num);
//	qsort(arr, num, sizeof(int), CompInt);
//	show(arr,num);
//	system("pause");
//	return 0;
//}


//int CompChar(const void* _x, const void* _y)
//{
//	char** x = (char**)_x;      //char* x = *(char**)_x;
//	char** y = (char**)_y;      //char* y = *(char**)_y;
//	return strcmp(*x, *y);      //return strcmp(x, y);
//}
//int main()
//{
//	char* arrp[] = { "abcd","asas" ,"2343","csdf"};
//	int num = sizeof(arrp) / sizeof(arrp[0]);
//	qsort(arrp, num, sizeof(char *), CompChar);
//
//	system("pause");
//	return 0;
//}

//void Swap(char *str, char *dst, int size)
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
//
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

//int CmpInt(const void* _x, const void* _y)    //��дqsort����
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

//int Compchar(const void* x, const void* y)
//{
//	char* xp = *(char**)x;
//	char* yp = *(char**)y;
//	return strcmp(xp, yp);
//}
//void show(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void MySwap(char* str, char* dst, int size)
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
//void my_qsort(void* arr, int num, int size, int(*Cmpar)(const void* x, const void* y))
//{
//	assert(arr != NULL);
//	assert(*Cmpar != NULL);
//	char* e = (char*)arr;
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (Cmpar(e + j*size,e+(j+1)*size)>0)
//			{
//				MySwap(e + j*size, e + (j + 1)*size, size);
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	//int arr[] = { 4, 2, 3, 45, 32, 98, 299, 345, 435, 24 };
//	char* str[] = { "abcd", "acac", "2141", "dsfa" };           //ָ�������������ǵ�ַ������Ԫ�ص�ַ��ͬ����Ԫ�ص�ַ�����õõ���
//	int num = sizeof(str) / sizeof(str[0]);
//	//show(arr, num);
//	my_qsort(str, num, sizeof(char*), Compchar);
//	//show(arr, num);
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

//int main()
//{
//	int a = 19;
//	int *p = &a;
//	printf("%d\n", *p);
//	printf("%p\n", *p);
//	printf("%d\n", p);
//	printf("%p\n", p);
//	system("pause");
//	return 0;
//}

//int CompInt(const void* x, const void* y)
//{
//	int *xp = (int*)x;
//	int *yp = (int*)y;
//	if (*xp > *yp)
//	{
//		return 1;
//	}
//	else if (*xp < *yp)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void Show(int arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 4, 22, 5, 435, 64, 63, 452, 453, 9 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Show(arr, num);
//	qsort(arr, num, sizeof(int), CompInt);
//	Show(arr, num);
//	system("pause");
//	return 0;
//}



//int Compstr(const char** x, const char** y)
//{
//	return strcmp(*x, *y);
//}
//int main()
//{
//	char* arrp[] = { "abcd", "asfd", "2341", "saef" };
//	int num = sizeof(arrp) / sizeof(arrp[0]);
//	qsort(arrp, num, sizeof(char*), Compstr);
//	system("pause");
//	return 0;
//}

//void Show(int arr[], int num)          //qsort ����
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Swap(char* x, char* y, int size)
//{
//	while (size)
//	{
//		char temp = *x;
//		*x = *y;
//		*y = temp;
//		x++;
//		y++;
//		size--;
//	}
//}

//void my_qsort(void* arr, int num, int size, int(*Compar)(const void* , const void* ))
//{
//	assert(arr != NULL);
//	assert(*Compar != NULL);
//	char* e = (char*)arr;
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (Compar(e+j*size,e+(j+1)*size)>0)
//			{
//				Swap(e+j*size,e+(j+1)*size,size);
//			}
//		}
//	}
//}
//
//
//int CmpInt(const int *xp, const int *yp)
//{
//	if (*xp > *yp)
//	{
//		return 1;
//	}
//	else if (*xp < *yp)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[] = {24, 12, 234, 135, 5, 8, 235, 9, 10, 49};
//	int num = sizeof(arr) / sizeof(arr[0]);
//	Show(arr, num);
//	my_qsort(arr, num, sizeof(int), CmpInt);
//	Show(arr, num);
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

//#include <string.h>
//int main()                                           // strlen����
//{
//	//size_t strlen(const char* str)                 //size_t :�޷�������  
//	char szInput[10];
//	printf("Enter a sentence: ");
//	gets(szInput);                             //���� ��gets����׼����
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

//int main()                          //strcpy
//{ 
//	//strcpy        �Ѻ��߿���ǰ�ߣ�����ֵΪ�������֮�����ַ�������ʼ��ַ
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
//	char scr[] = { 'w', 'o', 'r', 'l', 'd' };    //Դ�ַ���������'\0'����
//	char dst[16] = { 0 };
//	strcpy(dst, scr);
//	printf("%s", dst);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const char* src = "hello";
//	char dst[16]="i love China";   //�Ὣ\0���룬������dst�����Ϊ��"hello\0 China\0\0\0\0"
//	strcpy(dst, src);
//	printf("%s\n", dst);          //��ӡֻ���ӡhello,�ַ�����ӡ��\0ֹͣ���������ݲ���ӡ
//	printf("%s\n", src);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//strcat     �ַ���ƴ�ӣ��Ѻ�һ��ƴ��ǰһ������('\0'��)
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
//{                          //��Դ�ַ���С��num,�򿽱���Դ�ַ�������Ŀ�����׷��0��ֱ��num��
//	const char *src = "world!";
//	char dst[16];                     //��ʽ���ã�����strlen �󣬽��䷵��ֵ��Ϊ����
//	strncpy(dst, src, strlen(src)+1); //������dstΪ��world!\0������������
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char src[] = "hello\0ac12";
//	char dst[16];  
//	printf("%d\n", sizeof(src));     //11
//	strncpy(dst, src, sizeof(src));  //������dstΪ��hello\0\0\0\0\0\0����������ֵ
//	printf("%s\n", dst);          //��ӡֻ���ӡhello,�ַ�����ӡ��\0ֹͣ���������ݲ���ӡ
//	printf("%s\n", src);
//	system("pause");
//	return 0;
//}

////strncat   char* strncat(char* destination,const char* source,size_t num) ;
//int main()
//{
//	const char *src = "world!";
//	char dst[16] = "hello\0xxas";
//	strncat(dst, src,strlen(src));   //������'\0'��λ�ã���������Ϊ��helloworld!����ȫ��\0
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

//int main()          //puts:�Ǹ�ʽ�����   printf:��ʽ�����
//{
//	puts("hello %d\n");
//	fputs("hello %d\n", stdout);        //��fputs��puts��ʽ��ӡ
//	printf("hello %d\n", 10);
//	system("pause");
//	return 0;
//}


//int main()                //strncmp��ʹ�ã��������������ַ���
//{
//	char str[][5] = { "r2d2", "c3p0", "r2a6" };
//	int n;
//	puts("Looking for r2 astromech droids...");
//	for (n = 0; n < 3; n++)
//	if (strncmp(str[n], "r2xx", 2) == 0)
//	{
//		printf("found %s\n", str[n]);         //str[n]:����ŵ���ָ���ַ����ĵ�ַ
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


//int main()                //strstr:�Ӵ�����      ����ǰһ���ַ����е�һ�γ��ֺ�һ���ַ���ʱ�ĵ�ַ
//{
//	char* start = strstr("hello bit,hello world!","bit");
//	printf("%s\n", start);
//	system("pause");
//	return 0;
//}

//int main()                     //strstr��strncpy������ʹ�ã����ַ������и���
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");  //pchָ��"simple"����Ԫ�ص�ַ
//	strncpy(pch, "sample", 6);
//	puts(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//int main()      //strtok:�ַ����ָ�
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

//#include <errno.h>   //���������ͷ�ļ�
//int main()    //strerror   char* strerror(int errnum);���ش����룬����Ӧ�Ĵ�����Ϣ
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

//int main()                                    //2020.12.03
//{
//	char str[] = "hello bit,hello world";
//	char* p = strtok(str, " ,");
//	while (p != NULL)
//	{
//		printf("%s\n", p);
//		p = strtok(NULL, " ,");
//
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char str = 'c';            //�ַ���char���գ��ַ�����char*����
//	char *str1 = "c";
//	system("pause");
//	return 0;

//}

//int main()
//{
//	char* p = "This is#a,simple.string";
//	char dst[30] = { 0 };
//	strcpy(dst, p);
//	char* str = NULL;
//	for (str = strtok(dst, " #,."); str != NULL; str=strtok(NULL, " #,."))
//	{
//		printf("%s\n", str);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char* p = "This is#a,simple.string";
//	char dst[30] = { 0 };
//	strcpy(dst, p);
//	char* str = NULL;
//	for (str = strtok(dst, " #,."); str != NULL; str = strtok(NULL, " #,."))
//	{
//		printf("%s\n", str);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char* p = "This is#a,simple.string";
//	char dst[30] = { 0 };
//	strcpy(dst, p);
//	char* str = strtok(dst, " #,.");
//	while (str != NULL)
//	{
//		printf("%s\n", str);
//		str = strtok(NULL, " #,.");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("before: %d\n", errno);
//	FILE *fp = fopen("test.log", "r");
//	if (fp == NULL)
//	{
//		printf("after: %d\n", errno);
//		printf("%s\n", strerror(errno));
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	for (int i = 0; i < 50; i++)
//	{
//		printf("%d->%s\n", i, strerror(i));
//	}
//	system("pause");
//	return 0;
//}
 
//int main()                              //�ַ�ת��
//{
//	char c = tolower('A');
//	printf("%c\n", c);
//	system("pause");
//	return 0;
//}


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
//	int n;                                                  //�ǽ��ֽ�ת��Ϊascii��ֵ���бȽ�
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


//char *MyStrcpy(char* dst, const char* src)            //ģ��ʵ��strcpy
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


//char* MyStrcat(char* dst, const char* src)            //ģ��ʵ��strcat
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
//	while (*str)                             //ȷ����ʼλ��
//	{ 
//		const char* p = str;
//		const char* q = sub_str;
//		while (*p && *q && *p == *q)         //�ֲ��Ƚ�
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
//int main()                                  //ģ��ʵ��strstr
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
//int main()                                //ģ��ʵ��memcpy
//{                                         //�������ڴ��ص�������
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
//int main()                                                       //ģ��ʵ��memmove
//{                                                                //��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص���
//	char dst[16] = "abcd1234";
//	printf("%s\n", MyMemmove(dst + 1, dst, strlen(dst)+1));
//	system("pause");
//	return 0;
//}


//int main()                                                      //��ַ������
//{
//	int a = 4;
//	int *p = &a;
//	int *q = &a;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%d\n", *q);
//	*q = 10;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%d\n", *q);
//	system("pause");
//	return 0;
//}


//struct Stu                    //�����ṹ�����ͣ������ڲ���Ա��ȫһ�£�Ҳ����������
//{
//	char name[16];
//	int age;
//}*p;
//struct Stu1
//{
//	char name[16];
//	int age;
//}stu;
//
//int main()
//{
//	p = &stu;                          //warning,���Ͳ�һ�£�p���ɴ洢stu��ַ
//	system("pause");
//	return 0;
//}

//struct NODE                       //�ṹ��������ã��˴��벻���У���Ϊ�޷�ȷ��Ҫ���ٶ��ռ�
//{                                 //�ṹ���Ա�п��ԷŽṹ�壬�����ܷ�����ṹ��������޷�ȷ����Ҫ���ٶ��ռ�
//	int data;                     // ���ĳɽṹ��ָ�������������
//	struct NODE next;
//};
//
//struct NODE
//{
//	int data;
//	struct NODE* next;           //��ȷ�������÷�ʽ���ýṹ��ָ��
//};


//typedef unsigned long long ull;              //typedef���÷���������������
//int main()
//{
//	ull x = 100;
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}


//typedef struct NODE               //�������
//{              
//	int data;
//	node_t* next;                   //���͵�ʹ����Ҫ�����͵Ķ���֮��ģ�������ʹ�ú���
//}node_t;

//typedef struct NODE               //typedef ��struct NODE�ض���Ϊnode
//{
//	int data;
//  struct NODE*next;
//}node_t;
//
//int main()
//{
//	node_t s1 = { 16, };         //_t:һ�����Զ������ͺ�׺   
//	system("pause");
//	return 0;
//}

//struct S1
//{
//	char c1;                //1
//	int i;                  //3+4
//	char c2;                //1
//}s;
//int main()
//{
//	printf("%d\n", sizeof(struct S1));          //��СΪ12
//	printf("%d\n", sizeof(s));
//	printf("%p\n", (&s.c1));
//	printf("%p\n", (&s.i));
//	printf("%p\n", (&s.c2));
//	printf("%p\n", (&s)+1);
//	system("pause");
//	return 0;
//}


//struct S1
//{
//	char c1;            //1
//	char c2;            //1
//	int i;              //2+4
//}s;
//int main()
//{
//	struct S1 s = { 'a', 'b', 12 };
//	printf("%d\n", sizeof(struct S1));          //��СΪ8
//	printf("%d\n", sizeof(s));
//	printf("%p\n", &s);
//	printf("%p\n", &s.c1);
//	printf("%p\n", &s.c2);
//	printf("%p\n", &s.i);
//	system("pause");
//	return 0;
//}

//struct s3
//{
//	double d;    //8
//	char c;      //1
//	int i;       //3+4
//}s;
//int main()
//{
//	printf("%d\n", sizeof(struct s3));        //16
//	printf("%p\n", &s.d);
//	printf("%p\n", &s.i);
//	system("pause");
//	return 0;
//}

//struct s3
//{
//	double d;    //8
//	char c;      //1
//	int i;       //3+4
//}s;
//struct s4
//{
//	char c1;     //1
//	struct s3 s; //7+16
//	double d;    //8
//}s1;
//int main()
//{
//	printf("%d\n", sizeof(struct s3));        //16
//	printf("%d\n", sizeof(struct s4));        //32
//	system("pause");
//	return 0;
//}

//struct s5                    //48
//{
//	char c1;        //1
//	struct s3 s;    //7+16
//	char* arr[3];   //12      //��������Ķ�������4,12����������Ĵ�С
//	short* b;       //4
//	double d;       //8
//};

//struct s3
//{
//	double d;    //8
//	char c;      //1
//	int i;       //3+4
//}s;
//struct s5                    //48
//{
//	char c1;        //1
//	struct s3 s;    //7+16
//	char* arr[3];   //12      //��������Ķ�������4,12����������Ĵ�С
//	short* b;       //4
//	double d;       //8
//};
//struct s6           //168
//{
//	char c;        //1
//	struct s3 s;   //7+16
//	char *d;       //4
//	char e[3];     //3
//	float *fp;     //1+4
//	float f;       //4
//	double d[3];   //24
//	struct s5 ss[2]; //96
//	char g;          //1
//};

//#pragma pack(4)        //����Ĭ�϶�����Ϊ4
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()          //ȡ�����õ�Ĭ�϶���������ԭΪĬ��

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//}a;
//int main()                                 //λ�Σ������ͽṹ�����ƣ���ͬ��Ϊ��
//{                                          //1.λ�εĳ�Ա������ int��unsigned int ��signed int ��char��
//	printf("%d\n", sizeof(a));               //2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡���������Ҫʹ�õı���λ������
//	system("pause");
//	return 0;
//}

//struct A                                    //λ�Σ�һ��ѹ���洢������������Ч�����⣬���ǿռ�ʹ����
//{                                           //λ�δ���ȱ�㣺����ֲ�Խϲ�
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//}a;
//int main()
//{
//	struct A a = { 0 };
//	printf("%d\n", sizeof(a));
//	a.a = 10;            //1010->010
//	a.b = 12;            //1100
//	a.c = 3;             //00011
//	a.d = 4;             //0100
//	system("pause");
//	return 0;
//}

//enum color
//{
//	RED,
//	YELLOW=2,               //���Ը�ֵ
//	BLUE,                   //{}��Ϊö�ٳ���,������','����
//	PINK,
//	BLACK
//}c;
//int main()                  //ö��    ��һһ�о�
//{                           
//	enum color c = BLUE;    //ö�ٱ�����ֻ�ܷ�ö�ٳ������Ų���������͵Ĳ��졣
//	printf("%d\n", c);      //ö�ٱ���c��ö�ٳ�����ʵ�����϶�Ϊint ����
//	system("pause");
//	return 0;
//}


//union Un                        //�������͵�����
//{
//	char c;
//	int i;                     //��Ա����ͬһ��ռ䣨��������Ҳ�й����壩
//}s;
//int main()                         //�����壨�����壩
//{
//	printf("%d\n", sizeof(s));
//	printf("%p\n", &(s.c));       //��ַ��ͬ����Ա����һ��ռ�
//	printf("%p\n", &(s.i));
//	system("pause");
//	return 0;
//}



//union Un
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union Un un;       //���ϱ����Ķ���
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);          //0x11223355
//	system("pause");
//	return 0;
//}


//union Un1
//{
//	char c[5];            //5           //��������Ϊ8
//	int i;                //4             
//}s;
//int main()                              //������Ҫ�ڴ����
//{                                       //��������ǣ����뵽����������������
//	printf("%d\n", sizeof(s));
//	system("pause");
//	return 0;
//}

//union Un
//{
//	int i;
//	char c;
//}s;
//
//int main()                        //�������жϴ�С��
//{
//	s.i = 1;
//	printf("%d\n", (s.c));        //���Ϊ1��ΪС�˴洢�����Ϊ0�Ǵ��   
//	system("pause");
//	return 0;
//}


//int main()                                          //malloc           ��̬�ڴ����
//{                                                   //void* malloc (size_t size);
//	int *mem = (int*)malloc(sizeof(int)* 10);    //����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ��
//	if (NULL == mem)            //���ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣����ʧ�ܣ�����һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//	{                                          //memջ�����ٿռ䣬malloc�������ٿռ䣬mem��ջ��ָ�����
//		printf("malloc error\n");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)              //malloc��free�������� stdlib.h ͷ�ļ���
//	{
//		printf("%d ",*(mem + i) = i);
//	}
//	printf("\n");                              //free
//	free(mem);                                 //void free (void* ptr);
//	mem = NULL;                                //free���������ͷŶ�̬���ٵ��ڴ�,���ֲܾ��ͷ�Ҳ�����ظ��ͷ�
//	system("pause");                           //�������ͷţ���������ڴ�й©������
//	return 0;
//}

//int main()
//{
//	/*int a[1000 * 1000];*/       //ջ�Ͽ��ٵĿռ�ʱ�̶��ģ�����̫������鿪�ٲ��ˣ�������
//	int *p = (int *)malloc(1000*1000);
//	if (NULL == p)
//	{
//		printf("malloc error\n");
//		return 1;
//	}
//	else
//	{
//		printf("malloc success\n");
//	}
//	printf("before:%p\n", p);
//	free(p);         //freeǰ��free��ָ����ָ��ĵ�ַ�������κα仯���ı���Ǹ�ָ�����ڴ�Ĺ�����ϵ
//	printf("after:%p\n", p);
//	p = NULL;        //����p����ָ������������ɷ��ʣ�����ÿ�
//	system("pause");
//	return 0;
//}


//int main()
//{                                        //calloc
//	int *p = (int*)calloc(5, 4);         //void* calloc (size_t num, size_t size)  ���￪����20���ֽ�
//	if (NULL == calloc)                  //�����Ĺ�����Ϊ num ����СΪ size ��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
//	{                                    //�뺯�� malloc ������ֻ���� calloc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0
//		printf("calloc error\n");
//		return 1;
//	}
//	printf("calloc success\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


//int main()                        //realloc    �Զ�̬�����ڴ�Ĵ�С���е���
//{                                 //void* realloc (void* ptr, size_t size)
//	int *p = (int *)malloc(20);   //  ptr ��Ҫ�������ڴ��ַ   size ����֮���´�С  ����ֵΪ����֮����ڴ���ʼλ��
//	if (NULL == p)                //realloc�����ڴ�ռ�����������:
//	{                             //1:ԭ�пռ�֮�����㹻��Ŀռ�   2:ԭ�пռ�֮��û���㹻��Ŀռ�
//		return 1;                 //���1��ֱ��ԭ���ڴ�֮��ֱ��׷�ӿռ�
//	}                             //���2���ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á������������ص���һ���µ��ڴ��ַ
//	printf("malloc success!\n");
//	//p = realloc(p, 10); //����д����������ʧ�ܷ���NULL���Ὣָ���Ͽռ��p��ֵ�գ�����ָ���Ͽռ䣬���ܵ����ڴ�й©
//	int *_p = realloc(p, 10);   
//	if (NULL == _p)
//	{
//		return 1;
//	}
//	p = _p;
//	free(p);
//	p = NULL;
//	_p = NULL;
//	system("pause");
//	return 0;
//}

////�����Ķ�̬�ڴ����
////1����NULLָ��Ľ����ò���
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;                                   //��������ʧ�ܣ�����ʧ�ܽ����ñ�ΪҰָ�룬������Ҫ�ж�
//	free(p);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);      //��ȷ
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;
//	printf("%d\n", *p);
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


////2,�Զ�̬���ٿռ��Խ�����
//int mian()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;                     //��i��10��ʱ��Խ�����
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

////3,�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);                       //free���ܶԷǶ�̬���ٵ��ڴ�ʹ��
//	system("pause");
//	return 0;
//}


////4��ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);                  //p����ָ��̬�ڴ����ʼλ��,free���ֲܾ��ͷ�
//	system("pause");
//	return 0;
//}

////5����ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);               //�ظ��ͷ�,free�����ظ��ͷ�
//	system("pause");
//	return 0;
//}

////6����̬�����ڴ������ͷţ��ڴ�й©��
//int main()
//{
//	int *p = (int *)malloc(sizeof(int)* 4);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;                                //δʹ��free�ͷ��ڴ棬���ܻ�����ڴ�й©
//	system("pause");
//	return 0;
//}

////��̬�ڴ���������������
//void GetMemory(char* p)            
//{
//	p = (char*)malloc(100);        //1��δ�����ж��Ƿ�����ɹ�  2��pΪ�βΣ���p�Ĳ���Ӱ�첻��str��str��ȻΪNULL  3��δ���ж�̬�ڴ���ͷ�
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");   //�������������һ�� void GetMemory(char** p)    ��������char* GetMemory(char* p)
//	printf(str);
//	system("pause");
//	return 0;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//int main()                          //����һ
//{
//	char* str = NULL;
//	GetMemory(&str);
//	if (NULL == str)
//	{
//		return 1;
//	}
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	system("pause");
//	return 0;
//}

//char* GetMemory(void)
//{
//	return (char*)malloc(100);
//}
//int main()                           //������
//{
//	char* str = NULL;
//	str = GetMemory();
//	if (NULL == str)
//	{
//		return 1;
//	}
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	system("pause");
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}                         //GetMemory����ջ֡�ͷź�����δ��������������printf���γ���ջ֡������֮ǰ���ݱ����ǣ����������ֵ
//int main()                             //��ӡ����Ϊ���ֵ
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);                            //free��pΪҰָ�룬��Ȼָ������������ɷ���
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	system("pause");
//	return 0;
//}


//typedef struct stu
//{
//	int i;
//	int arr[];                                       //���������Ա
//}s_t;
//int main()                                         //�������飺�ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
//{                                                        
//	s_t* p = (s_t*)malloc(sizeof(s_t)+sizeof(int)* 10);    //1��sizeof ���ص����ֽṹ��С����������������ڴ�
//	if (NULL == p)                       //�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

//struct stu
//{
//	int i;
//	int *p;
//}s;
//
//int main()                 //��ָ��ʵ����������Ĺ���
//{
//	s.p = (int *)malloc(sizeof(int)* 10);
//	if (NULL == s.p)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		s.p[i] = i;
//		printf("%d ", s.p[i] = i);
//	}
//	free(s.p);
//	s.p = NULL;
//	system("pause");
//	return 0;
//}

//int main()                                    //"r":ֻ��    "w":ֻд������ʽд�� "a":׷�ӣ���β�������ٴ���д��
//{
//	FILE* fp = fopen("test.log", "w");          //fopen
//	if (NULL == fp)                             
//	{
//		printf("fopen error!\n");
//		system("pause");
//		return 1;
//	}
//	fclose(fp);                                 //fclose
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("C:\\Users\\DELL\\Documents\\Visual Studio 2013\\Projects\\�ļ�����\\test_.log", "r");
//	if (NULL == fp)
//	{
//		printf("fopen error!\n");
//		system("pause");
//		return 1;
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                 //fputc
//{                                          //int fputc ( int character, FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		printf("fopen error!\n");
//		system("pause");
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z';i++)
//	{
//		//printf("%c ", i);
//		//fputc(i, stdout);
//		fputc(i, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //fgetc
//{                                           //int fgetc ( FILE * stream );
//	FILE* fp = fopen("test.log", "r");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	int c = 'x';                              // ע�⣺int����char��Ҫ����EOF
//	while (c != EOF)
//	{
//		c = fgetc(fp);
//		printf("%c", c);
//	}
//	printf("\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}


//int main()                                 //fputs
//{                                          //int fputs ( const char * str, FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fputs("hello world!\n", fp);
//	fputs("hello China!\n", fp);
//	fputs("hello!\n", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                       //fgets
//{                                                //char * fgets ( char * str, int num, FILE * stream );
//	FILE* fp = fopen("test.log", "r");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	char str[64];
//	for (int i = 0; i < 3; i++)
//	{
//		fgets(str, 64, fp);
//		printf("%s\n", str);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}



//int main()                                         //fprintf
//{                                                  //int fprintf ( FILE * stream, const char * format, ... );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fprintf(fp, "hello %d,hello %c,hello %f\n", 100, 'c', 0.04);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                      //fscanf
//{                                               //int fscanf ( FILE * stream, const char * format, ... );
//	FILE* fp = fopen("test.log", "r");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	int i = 0;
//	char c = 0;
//	double f = 0.0;
//	fscanf(fp, "hello %d,hello %c,hello %lf\n", &i, &c, &f);
//	fclose(fp);
//	system("pause");
//	return 0;
//}


//int main()                                  //ftell
//{                                           //long int ftell ( FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		int pos = ftell(fp);
//		printf("%d ", pos);
//		fputc(i, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //fseek
//{                                         //int fseek ( FILE * stream, long int offset, int origin );
//	FILE* fp = fopen("test.log", "w");    //SEEK_CUR:��ǰλ��   SEEK_SET:��ͷλ��  SEEK_END:��βλ��
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fseek(fp, -2, SEEK_CUR);
//	fputc('X', fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fseek(fp, 3, SEEK_SET);
//	fputs("XYZ", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fseek(fp, 3, SEEK_END);        //λ��Ϊz�ĺ�һ��λ��
//	fputs("XYZ", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //��fseek��ftell����һ���ļ��Ĵ�С
//{
//	FILE* fp = fopen("test.log", "r");        //�ļ�ÿ�δ򿪽���"r"��"w"ʱ��ʱ�ص���ͷ��ƫ����Ϊ0��λ�ã�
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	printf("%d\n", ftell(fp));
//	fseek(fp, 0, SEEK_END);
//	printf("%d\n", ftell(fp));
//  fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //rewind
//{                                         //void rewind ( FILE * stream );
//	FILE* fp = fopen("test.log", "r");    //�ص��ļ�����ʼλ��
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	int c = 'x';
//	do{
//		printf("begin:%d\n", ftell(fp));
//		c = fgetc(fp);
//		printf("  end:%d\n", ftell(fp));
//		rewind(fp);
//		printf("%c\n", c);
//		Sleep(500);
//	} while (c != EOF);
//	system("pause");
//	return 0;
//}

//int main()                          //�������ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");   //"wb":�����������ʵ��ֻ��ǿ�����ã�ʵ�������ı������ļ��ÿ��ӿڣ�
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, fp);       //fwrite   �����Ƶ���ʽ������ļ���
//	fclose(fp);                           //size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	fp = NULL;
//	system("pause");
//	return 0;
//}

//int main()                      //�򿪷�ʽ��"wb"���ӿ���fprintf���õ������ı��ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");  
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fprintf(fp, "%d", a);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                //�򿪷�ʽ��"w"���ӿ���fwrite���õ������ı��ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //�򿪷�ʽ��"w"���ӿ���fprintf���õ������ı��ļ�
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fprintf(fp, "%d", a);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                    //feof:file End Of File
//{                                             //int feof ( FILE * stream );
//	FILE* fp = fopen("test.log", "w");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fclose(fp);
//	FILE* p = fopen("test.log", "r");
//	if (NULL == p)
//	{
//		return 2;
//	}
//	int c;                                     // ע�⣺int����char��Ҫ����EOF
//	while ((c = fgetc(p)) != EOF)
//	{
//		printf("%c ", c);
//	}
//	printf("\n");
//	if(feof(p))
//	{
//		puts("End of file reached successfully");
//	}
//	fclose(p);
//	system("pause");
//	return 0;
//}


//#define SIZE 10                                //fread
//int main()                                     //size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//{
//	double a[SIZE] = { 3.14, 3.15, 3.16, 3.17, 3.18, 3.14, 3.15, 3.16, 3.17, 3.18 };
//	FILE* fp = fopen("data.txt", "wb+");       //�򿪷�ʽ����д
//	if (NULL == fp)
//	{
//		return 1;
//	}
////	fwrite(a, sizeof(double), SIZE,fp);
//	for (int i = 0; i < SIZE; i++)
//	{
//		fwrite(a + i, sizeof(double), 1, fp);
//	}
//	printf("%d\n", ftell(fp));
//	rewind(fp);                             //д���ص��ʼ���ж�ȡ
//	printf("%d\n", ftell(fp));
//	double b[3] = { 0.0 };
//	while (fread(b, sizeof(double), 3, fp)>0)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%f\n", b[i]);           //˫��ѭ������ӡ12�Σ���������Ϊ������δ�����ǵ�����ֵ
//		}
//	}
//	if (feof(fp))
//	{
//		printf("read file end...!\n");
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//#define SIZE 10                             //fread
//int main()                                  //size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//{
//	double a[SIZE] = { 3.14, 3.15, 3.16, 3.17, 3.18, 3.14, 3.15, 3.16, 3.17, 3.18 };
//	FILE* fp = fopen("data.txt", "wb");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	//fwrite(a, sizeof(double), SIZE,fp);
//	for (int i = 0; i < SIZE; i++)
//	{
//		fwrite(a + i, sizeof(double), 1, fp);
//	}
//	fclose(fp);                                      
//	FILE* p = fopen("data.txt", "rb");              //�ļ��رպ��ٴδ�
//	if (NULL == p)
//	{
//		return 2;
//	}
//	double b[3] = { 0.0 };
//	size_t s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//    s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//    s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//    s = fread(b, sizeof(double), 3, p);
//	printf("%d\n", s);
//	fclose(p);
//	system("pause");
//	return 0;
//}

//#define SIZE 10
//int main()
//{
//	double a[SIZE] = { 3.14, 3.15, 3.16, 3.17, 3.18, 3.14, 3.15, 3.16, 3.17, 3.18 };
//	FILE* fp = fopen("data.txt", "wb+");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(a, sizeof(double), SIZE, fp);
//	rewind(fp);
//	double b[3] = { 0.0 };
//	while (1)
//	{
//		size_t s = fread(b, sizeof(double), 3, fp);
//		printf("%d\n", s);
//		if (s < 3)
//		{
//			break;
//		}
//	}
//	if (feof(fp))
//	{
//		printf("read file end...\n");
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                   //������(������Ϊһ���ڴ�)
//{                                            //�޻��壺û�л�����     
//	FILE* fp = fopen("data.txt", "wb");        //�л��壺ͨ����������ʾ���ϣ��������ַ�����ˢ�»��ƣ�
//	if (NULL == fp)                            //ȫ���壺ͨ����������ͨ�ļ���д����ˢ�£�
//	{
//		return 1;
//	}
//	char buf[] = "abcd1234";
//	fwrite(buf, sizeof(buf), 1, fp);
//	printf("sleep ing...\n");
//	Sleep(5000);
//	printf("sleep end...\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("data.txt", "wb");
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	char buf[] = "abcd1234";
//	fwrite(buf, sizeof(buf), 1, fp);
//	Sleep(20000);
//	fflush(fp);                             //ǿ��ˢ��
//	printf("fflush done...\n");
//	Sleep(1000);
//	printf("sleep ing...\n");
//	Sleep(5000);
//	printf("sleep end...\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//#define ADD(x,y) x+y   //��ʽ���д�ɣ�#define ADD(x,y) ((x)+(y))     
//int main()
//{
//	printf("%d\n", ADD(10, 20));
//	printf("%d\n", 10 * ADD(10, 20));    //���滻��Ϊ10*10+20
//	system("pause");
//	return 0;
//}

//#define M 2
//#define SEQ(x) ((x)*(x))
////#define A B                     //���󣨵ݹ飩
////#define B A
//int main()                        //�������#define �����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ�
//{
//	printf("%d\n", SEQ(M));         //���滻�������������ڵ���
//	system("pause");
//	return 0;
//}


//#define M 10
//int main()       
//{
//	printf("%d\n", M);
//	printf("helloM\n");            //��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ���������
//	int aM = 10;                   //�˴���MҲ���ᱻ�滻
//	system("pause");
//	return 0;
//}


//int main()                                //�����ַ����Զ���������
//{
//	printf("hello""world""hello""bit\n");
//	const char* str = "hello""world";
//	printf(str);
//	system("pause");
//	return 0;
//}

//#define PRINT(s) printf(#s)
//int main()                              //#
//{                                       //ʹ�� # ����һ���������ɶ�Ӧ���ַ���
//	PRINT(10 + 20 + 30);                  //����10+20+30�滻Ϊ"10+20+30"
//	system("pause");
//	return 0;
//}


//#define PRINT(FORMAT,VALUE) printf("the value of " #VALUE " is " FORMAT "\n", VALUE)
//int main()
//{
//	PRINT("%d", 10+20);
//	system("pause");
//	return 0;
//}


//#define MAKE(n,v) sum##n+=v
//int main()                          //##
//{                                   //##���԰�λ�������ߵķ��źϳ�һ�����š� ������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//	int sum1 = 10;                  //ע�� ���������ӱ������һ���Ϸ��ı�ʶ����������������δ�����
//	printf("sum1=%d\n", sum1);
//	MAKE(1, 20);
//	printf("sum1=%d\n", sum1);
//	system("pause");
//	return 0;
//}

//#undef ����ָ�������Ƴ�һ���궨�塣

//int main()                         //��������Ԥ�������
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	system("pause");
//	return 0;
//}

////#define F 1
//#define F              //���Բ�����ֵ
//int main()
//{
//#ifdef F
//	printf("1");
//#endif
//	system("pause");
//	return 0;
//}


//int main()
//{
////#define a 1
//#define a              //�����Բ�����ֵ
//#if a==1
//	printf("1");
//#else
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//#if a==1                 //1�����Ѷ���  2������ֵ
//	printf("1");
//#else
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//int main()                
//{
//#ifndef F            
//#define F           //��δ����F������F
//	printf("1");
//#endif
//#ifndef F           //F�Ѷ��岻�ٽ��ж��壬�����ڱ���ͷ�ļ����ظ�����
//#define F
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//����ͷ�ļ��ظ���������ַ�ʽ��1��#pragma once
//                              2��#ifndef  _TEST_H_ 
//                                 #define  _TEST_H_ 
//                                //ͷ�ļ�����
//                                 #endif
//1, #pragma warning (disable:4996)
//2, #pragma once 
//3, #pragma pack()      //�ṹ��Ĭ�϶�����������