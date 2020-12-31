#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)

//int Fact(int n)            //阶乘
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


//int Fact(int n)               //阶乘相加
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



//#define NOT_FOUND -1               //二分查找（折半查找）
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
//	char content[] = "hello world,hello china";   //content:内容
//	char lable[]   = "#######################";   //lable:  标签
//	int len = strlen(content);
//	int start = 0;
//	int end = 0;
//	printf("%s\n", lable);
//	for (start=0,end=len-1; start <= end;start++,end--)
//	{
//		lable[start] = content[start];
//		lable[end] = content[end];
//		Sleep(1000);
//		printf("%s\r", lable);        //r:回车
//	}
//}
//int main()
//{
//	show();
//	printf("\n");
//	system("pause");
//	return 0;
//}


//#define NAME "tom"                    //用户登录
//#define PASSWORD "123456"
//int Login(int times)
//{
//	char name[64] = { 0 };
//	char password[64] = { 0 };
//	int ret = -1;
//	do
//	{
//		printf("请输入姓名# ");
//		scanf("%s", name);
//		printf("请输入密码# ");
//		scanf("%s", password);
//		if (strcmp(name, NAME) == 0 && strcmp(password, PASSWORD) == 0)
//		{
//			ret = 1;
//			break;
//		}
//		else
//		{
//			times--;
//			printf("你还剩%d次机会\n", times);
//			if (0 == times)
//			{
//				printf("需要%d秒后才能再次尝试\n", 3);
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
//		printf("登录成功\n");
//	}
//	else
//	{
//		printf("登录失败\n");
//	}
//	system("pause");
//	return 0;
//}


//int main()                                 //cmd命令
//{
//	printf("你的电脑讲在两分钟后关机，若要取消关机请输入“我是猪\n”");
//	system("shutdown -s -t 30");
//	char input[64] = { 0 };
//	while (1)
//	{
//		printf("承认吧# ");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("关机已取消\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	printf("你的电脑将在两分钟后关机，若要取消关机请输入“我是猪”\n");
//	system("shutdown -s -t 120");         
//	char input[64] = { 0 };
//Start:
//	printf("承认吧# ");
//	scanf("%s", input);                      //scanf里面"%s"里不能加\n。
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机已取消\n");
//		
//	}
//	else
//	{
//		printf("输入错误，请重新输入\n");
//		goto Start;
//	}
//	system("pause");
//	return 0;
//}



//void swap(int* a, int* b)        //两数交换
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
//	return a > b ? a : b;        //两数比大小
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


//int IsPrimeNumber(int n)            //素数：大于1并且只能被自身与1整除的整数
//{                                   //参考
//	for (int i = 2; i < n; i++)       //i<=n/2或i<(int)sqrt(n)
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


//int IsPrimeNumber(int n)            //自写
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

//int IsLeapYear(int year)                                //闰年，参考
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
                                                  
//#define Not_Found -1                           //二分查找（折半查找）
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


//void Inc(int* count)     //每次调用便会加一
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

//int MyStrlen(char* str)           //strlen函数的重现   
//{                                 //char str[]="内容"     
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

//int Fact(int a)          //函数递归法求阶乘
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


//int Fib(int n)             //斐波那契数列，函数递归求法
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



//int Fib(int n)                               //斐波那契数列，函数求法
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




//int main()                           //数组的赋值
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

//int main()                                                  //二维数组的赋值方法
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


//int main()          //二维数组在内存中也是连续存储。从低地址到高地址
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



//void BubbleSort(int arr[], int num)        //冒泡排序
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
//	while (*arr)                       //*arr遇到'\0'后，while判断条件为假，跳出循环
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
//	printf("%d\n", sizeof(arr));            //代表整个数组
//	printf("%d\n", sizeof(arr + 1));//代表的是数组中第二个元素地址
//	printf("%d\n", sizeof(arr)+1);          //代表整个数组
//	printf("%p\n", &arr[0]);          
//	printf("%p\n", &arr[0] + 1);    //代表的是数组中第二个元素地址
//	printf("%p\n", arr + 1);         //代表的是数组中第二个元素地址
//	printf("%p\n", &arr + 1);               //代表整个数组
//	system("pause");
//	return 0;
//}


//int main()                      //P里放的是a的地址
//{                               //p也有自己的地址
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%p\n", &p);
//	system("pause");
//	return 0;
//}



//int main()
//{                                            //:结果为16
//	int arr[] = { 1, 2, (3, 4), 5 };         //(3,4):逗号表达式，输入为4，总共为四个元素
//	printf("%d\n", sizeof(arr));             //sizeof(arr):求整个数组所占空间大小
//	system("pause");
//	return 0;
//}


//int main()                                              //结果为10 9；
//{                                                       //sizeof(str)：获取数组的总大小，10个元素
//	char str[] = "hello bit";                           //strlen(str): 获取字符串中有效字符的个数，不算'\0'
//	printf("%d %d\n", sizeof(str), strlen(str));
//	system("pause");
//	return 0;
//}


//int main()                                                     //数组acX的长度大于数组acY的长度
//{
//	char acX[] = { "abcdefg" };
//	char acY[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	system("pause");
//	return 0;
//}


//void Swap(int* a, int* b)                           //不创建临时变量（第三个变量），实现两数交换
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


//void Swap(int a, int b)            //未完成交换
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
//int main()                  //求一个整数存储在内存中的二进制1的个数
//{                           //此代码缺陷：不能用于负数
//	int a = 0xFFEE;
//	int count = Getone(a);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

//int Getone(int a)         //求一个整数存储在内存中的二进制1的个数
//{                         //此代码缺陷：不能用于负数
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
//int main()                         //求一个整数存储在内存中的二进制1的个数
//{                                  //可用于负数
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
//}                               //理解
//int main()                      //求一个整数存储在内存中的二进制1的个数
//{                               //可用于负数
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

//int main()                 //后置加加减减
//{
//	int a = 10;
//	int b = a--;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


//int main()         //()强转符号
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
//	int a = (int)s;            //首元素地址转为整型赋值给a
//	printf("%d\n", a);         //(int)*s  赋值字符‘1’
//	system("pause");
//	return 0;
//}

//int main()                    
//{
//	int a, b, c, d;
//	int i = (1, a = 0, b = 2, c = 3, d = 4);
//	i = a++ && ++b && d++;                        //a++:先使用后加加，0为假。后面不执行。
//	printf("%d %d %d %d %d\n", i, a, b, c, d);    //若为||，两假才不执行
//	system("pause");
//	return 0;

//int main()
//{
//	int a = 10;
//	int b = a == 10 ? 20 : 30;           //三目操作符
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}


//int main()                      //输出为C=13，逗号表达式，代码一
//{
//	int a = 1;
//	int b = 2;
//	int c = ( a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//int main()                       //逗号表达式，代码二
//{
//	if (a = b + 1, c = a / 2, d > 0);
//	system("pause");
//	return 0;
//}

//int main()                         //逗号表达式，代码三
//{                                  //若用逗号表达式，则为：while (a = get_val(), count_val(a), a > 0)
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

//int main()                      //隐式类型转换--整型提升
//{                               //按照变量的数据类型的符号位来提升
//	signed char a = -1;         //1111 1111
//	printf("%d\n", a);          //1111 1111 1111 1111 1111 1111 1111 1111
//	printf("%u\n", a);          //1111 1111 1111 1111 1111 1111 1111 1111
//	unsigned char c = -1;
//	printf("%d\n", c);          //0000 0000 0000 0000 0000 0000 1111 1111
//	printf("%u\n", c);          //0000 0000 0000 0000 0000 0000 1111 1111
//	system("pause");
//	return 0;
//}

//int main()                  //只打印C
//{
//	char a = 0xb6;            //a提升为 1111 1111 1111 1111 1111 1111 1011 0110
//	short b = 0xb600;      //0xb6提升为 0000 0000 0000 0000 0000 0000 1011 0110
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

//int main()                        //算术运算一定会进行提升，逻辑运算等看平台
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));   //1
//	printf("%d\n", sizeof(+c));  //4 参与运算，整型提升
//	printf("%d\n", sizeof(~c));  //4 参与运算，整型提升
//	printf("%d\n", sizeof(!c));  //1
//	system("pause");
//	return 0;
//}

//表达式求值：<1>隐式类型转换（整型提升）<2>算术转换
/*long double           //排名较低，转换成另一操作数类型后再运算
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
//	p = 100;             //将100这个地址存入P，存入后P不再指向a,指向100号地址
//	*p = 100;            //a=100;
//	system("pause");
//	return 0;
//}

//int main()                  //指针加减整数
//{                           //指针定义：type+*
//	int arr[10] = { 0 };      //对指针加1，其实是加上指针所指向类型的大小，等于+sizeof(type)
//	int *pi = arr;            //二级指针及二级指针之上指针加1，都为加上4，即加指针类型
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
//	int a = 0x11223344;    //此电脑为小端存储，小小小
//	char *p = (char*)&a;
//	int *q = &a;
//	*p = 0x55;            //只会改变一个字节
//	*q = 0;               //改变4个字节
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

//int main()              //两指针相减代表的是两指针之间所经历的元素的个数，元素的类型由指针表明
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
//		printf("%d ", arr[i]);          //相比少了一次寻址
//		printf("%d ", *(arr + i));      //相比少了一次寻址
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[5] = { 0 };
//	int *p[5];      //指针数组，存放指针的数组
//	//int(*p)[5];     //数组指针，指向数组的指针
//	int(*q)[5] = &a; //数组指针类型，数组指针变量    //存放了一维数组地址，相当于二维数组传参
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char arr[3][4] = { "12" ,"34","56"};     //二维数组的初始化
//	char(*p)[4] = arr;          
//	for (int i = 0; i < 3; i++)              //二维数组遍历赋值
//	{                                        //12个元素，i可到11     //p指向二维数组首地址,*p解引用（三个数组里的第一个）
//		 //*p[i] = 0;        //*p[0]代表解引用指向首元素里的第一个元素，*p[1]代表解引用指向第二个数组的第一个元素  
//		(*p)[i] = 0;                    //(*p)[0]代表解引用整个数组第一个元素，一共12个元素
//	}                                     
//	system("pause");
//	return 0;
//}

//int main()                       //一维数组，这里用来比较二维数组
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

//struct Book               //自定义的类型，若省略Book，则为匿名    //结构体
//{
//	char name[20];          //结构体的成员变量
//	int price;
//};                       //此处可以加变量名
//int main()
//{
//	struct Book a = { "C语言程序设计", 15 };  //自定义的变量
//	struct Book *p = &a;                      //结构体指针的定义，自定义类型+*
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



//struct stu { char name[20]; int age; }a = {"tom",16};  //其它种写法，可与int 类型比较一下
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
//	printf("%p\n", &stu);         //整个结构体的地址
//	printf("%p\n", &(stu.age));   //取出结构体成员的age的地址
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
//	printf("show:%d, %p\n", sizeof(s), &s);    //结构体传参不发生降维，地址与传参前不同
//}
//int main()
//{
//	struct stu s;
//	printf("main:%d, %p\n", sizeof(s), &s);  
//	show(s);
//	system("pause");
//	return 0;
//}


//typedef unsigned long long ull;              //typedef的用法，将类型重命名
//int main()
//{
//	ull x = 100;
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}


//void Show(int *p, int num)           //头文件<assert.h>,若为空则代码不继续执行
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
//	if (p != NULL)         //使用指针最好先判断该指针不为NULL
//	{
//		*p = 20;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//char* strcpy(char* dst, const char* src)          //strcpy函数的代码
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
//	const int a = 10;       //const修饰变量a,a不可直接被修改，可间接修改
//	//a = 20;
//	int *p = (int *)&a;     //&a正常类型为int *,因为a被const修饰，所以变为const int * 
//	*p = 20;                //p为int *类型，所以需强转
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	const int *p = &a;    //const 修饰*，所以不可解引用
//	//*p = 20;
//	int *const q = &a;    //const 修饰q，所以q不可直接修改
//	//q = NULL;
//	system("pause");      //const int *const p=&a; ：都不可以直接修改
//	return 0;
//}

//int main()
//{
//    int a = 10;
//	const int * p = &a;
//	const int** q = &p;
//	*q = 100;              //*q就是p
//	//**q = NULL;          //const修饰**，不能直接修改
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
//	*p = 20;             //const修饰了a与p ，依然可以解引用
//	system("pause");
//	return 0;
//}

//int MyStrlen(const char *p)              //MyStrlen函数
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
//	unsigned char x = -1;  //输出是255，unsigned char类型取值为0~255
//	signed char;           //1000 0000  (-0)规定为-128；取值为-128~127
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 9;               
//	float* fp =(float*) &n;
//	printf("%d\n", n);       //0000 0000 0000 0000 0000 0000 0000 1001
//	printf("%f\n", n);       //0 00000000 0000 0000 0000 0000 0000 000  //中间数为127
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
//	char c = 'a';      //栈上开辟，存储在栈上
//	char *p = &c;
//	char *q = 'd';     //该指针变量在栈上开辟，但字符存储在字符常量区
//	*q = 'c';
//	char *str = "abcd1234";  //该指针变量在栈上开辟，但字符串存储在字符常量区
//	*str = "egate";
//  const char* arr="asda1234"     //const修饰*，代表指针指向的内容不可改
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
//	if (str1 == str2)               //数组的首元素地址
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("2");
//	}
//	if (str3 == str4)           //在字符常量区只存储一份相同的数据
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

//int main()         //指针数组
//{
//	int *arr1[4];  //这是整型指针的数组
//	char *arr2[4]; //这是字符指针的数组
//	char **arr3[4];//二级字符指针的数组      //数组里面存放的是char**
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a = -128;     
//	printf("%u\n", a); //整型提升为1111 1111 1111 1111 1111 1111 1000 0000 而后以%u打印
//	system("pause");
//	return 0;
//}

//int main()
//{
//	signed char a = -1;
//	unsigned char c = -1; //先存入，当运算时先看类型发生了整型提升，再看输出方式
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


//void test(int **a)         //创建个二级整型指针接收整型指针数组的首元素地址
//{                          //整型指针数组的首元素为整型指针类型
//
//}
//int main()
//{
//	int *a[5] = { NULL };
//	test(a);
//	system("pause");
//	return 0;
//}

//void test(int arr[3][5])      //能接收
//void test2(int arr[][])       //不能接收
//void test1(int arr[][5])      //能接收
//void test3(int *arr)          //不能接收   接收整型指针类型
//void test4(int *arr[5])       //不能接收   整型指针数组，接收整型指针类型的地址，，等同于test6
//void test5(int(*arr)[5])      //能接收     整型数组指针，接收整型数组指针类型
//void test6(int **arr)         //不能接收   二级整型指针，接收整型指针类型的地址
//int main()
//{
//	int arr[3][5] = {0}; //二级数组传参降维成指向其内部元素类型的指针，这里是整型数组指针
//	test(arr);
//	system("pause");
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()                           //函数指针变量：保存函数地址的变量
//{                                  
//	printf("%d\n", ADD(10, 20));     //函数名是地址，是函数中众多代码块中的起始地址
//	int(*p)(int, int) = ADD;         //函数指针变量的开辟
//	printf("%d\n", (*p)(100, 200)); 
//	printf("%d\n", p(100, 200));     //函数指针，p与(*p)等价
//  printf("%p\n",ADD);              //函数名代表函数的地址，其含义与&函数名等价
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
//int main()                                         //函数指针数组计算器    转移表
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
//	float c = (float)a;       //将a数据强行转化为float类型存进c，a自身类型不变
//	printf("%f\n", a);
//	printf("%f\n", c);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char c = 'a';
//	int a = (int)c;          //将c数据类型强行转化为int 类型存进a
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


//int main()           //指针地址与解引用的地址
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
//int main()                          //qsort函数
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
//	assert(arr != NULL);                          //Compar记得加*,函数指针
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

//int CmpInt(const void* _x, const void* _y)    //自写qsort函数
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
//	char* str[] = { "abcd", "acac", "2141", "dsfa" };           //指针数组里面存的是地址，与首元素地址不同，首元素地址解引用得到它
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
//	printf("%d\n", sizeof(a));         //16  整个数组
//	printf("%d\n", sizeof(a+0));       //4   指针类型
//	printf("%d\n", sizeof(*a));        //4   首元素地址解引用（整型类型）
//	printf("%d\n", sizeof(a+1));       //4   第二个元素的地址
//	printf("%d\n", sizeof(a[1]));      //4   第二个元素
//	printf("%d\n", sizeof(&a));        //4   数组指针
//	printf("%d\n", sizeof(*&a));       //16  对数组指针解引用（数组类型）
//	printf("%d\n", sizeof(&a+1));      //4   数组指针
//	printf("%d\n", sizeof(&a[0]));     //4   首元素地址
//	printf("%d\n", sizeof(&a[0]+1));   //4   第二个元素地址
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(a));                       //6      整个数组
//	printf("%d\n", sizeof(a + 0));                   //4      首元素地址
//	printf("%d\n", sizeof(*a));                      //1      首元素地址解引用（第一个元素，字符类型）
//	printf("%d\n", sizeof(a[1]));                    //1      第二个元素
//	printf("%d\n", sizeof(&a));                      //4      数组指针
//	printf("%d\n", sizeof(&a + 1));                  //4      数组指针
//	printf("%d\n", sizeof(&a[0] + 1));               //4      第二个元素地址
//	system("pause");
//	return 0;
//}

//int main()
//{
//  //size_t strlen(const char* str);
//	char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(a));                   //6+随机             整个数组   
//	printf("%d\n", strlen(a + 0));               //6+随机             首元素地址
////	printf("%d\n", strlen(*a));                  //报错               第一个元素，字符类型
////	printf("%d\n", strlen(a[1]));                //报错               第二个元素，字符类型
//	printf("%d\n", strlen(&a));                  //warning、6+随机    数组指针类型
//	printf("%d\n", strlen(&a + 1));              //warning、随机      数组指针类型
//	printf("%d\n", strlen(&a[0] + 1));           //5+随机             第二个元素地址
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));           //7    整个数组
//	printf("%d\n", sizeof(a + 0));       //4    首元素地址
//	printf("%d\n", sizeof(*a));          //1    第一个元素
//	printf("%d\n", sizeof(a[1]));        //1    第二个元素
//	printf("%d\n", sizeof(&a));          //4    数组指针
//	printf("%d\n", sizeof(&a + 1));      //4    数组指针
//  	printf("%d\n", sizeof(&a[0] + 1));   //4    第二个元素地址
//	system("pause");
//	return 0;
//}


//int main()
//{
//  //size_t strlen(const char* str);
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));              //6                  整个数组
//	printf("%d\n", strlen(a + 0));          //6                  首元素地址
//	//printf("%d\n", strlen(*a));             //报错             首元素，字符类型
//	//printf("%d\n", strlen(a[1]));           //报错             第二个元素，字符类型
//	printf("%d\n", strlen(&a));             //warning、6         数组指针
//	printf("%d\n", strlen(&a + 1));         //warning、随机      数组指针
//	printf("%d\n", strlen(&a[0] + 1));      //5                  第二个元素地址
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char* a = "abcdef";
//	printf("%d\n", sizeof(a));               //4      指向字符串的指针
//	printf("%d\n", sizeof(a + 1));           //4      指向字符串第二个元素的指针
//	printf("%d\n", sizeof(*a));              //7      结果为1，没有字符串类型，*a为字符a（首元素）
//	printf("%d\n", sizeof(a[0]));            //1      首元素
//	printf("%d\n", sizeof(&a));              //4      二级指针类型
//	printf("%d\n", sizeof(&a + 1));          //4      二级指针类型
//	printf("%d\n", sizeof(&a[0] + 1));       //4      第二个元素地址
//	printf("%d\n", sizeof(*(&a)));           //4      指针类型，结果为a指针
//	system("pause");
//	return 0;
//}


//int main()
//{
//  //size_t strlen(const char* str);
//	char* a = "abcdef";
//	printf("%d\n", strlen(a));             //6                指向字符串的指针
//	printf("%d\n", strlen(a + 1));         //5                指向第二个元素的指针
//	//printf("%d\n", strlen(*a));            //报错           第一个元素
//	//printf("%d\n", strlen(a[0]));          //报错           第一个元素
//	printf("%d\n", strlen(&a));            //warning、随机    二级指针
//	printf("%d\n", strlen(&a + 1));        //warning、随机    二级指针
//	printf("%d\n", strlen(&a[0] + 1));     //5                第二个元素的地址
//	system("pause");
//	return 0;
//}


//int main()                                       //sizeof本质上是求类型的大小，而不是变量的大小
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));                   //48      整个数组
//	printf("%d\n", sizeof(a[0][0]));             //4       整个数组的第一个元素
//	printf("%d\n", sizeof(a[0]));                //16      数组1（第一个一维数组）
//	printf("%d\n", sizeof(a[0]+1));              //4       第二个元素的地址
//	printf("%d\n", sizeof(*(a[0]+1)));           //4       第二个元素
//	printf("%d\n", sizeof(a + 1));               //4       数组2的地址
//	printf("%d\n", sizeof(*(a + 1)));            //16      数组2
//	printf("%d\n", sizeof(&a[0] + 1));           //4       数组2的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));        //16      数组2
//	printf("%d\n", sizeof(*a));                  //16      数组1
//	printf("%d\n", sizeof(a[3]));                //16      数组4（C语言中允许，只是读取没有使用）
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

//void Show(int arr[], int num)          //qsort 函数
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

//int main()                                           //画图理解
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
//	char dst[16]="i love China";   //会将\0拷入，拷贝后dst数组变为："hello\0 China\0\0\0\0"
//	strcpy(dst, src);
//	printf("%s\n", dst);          //打印只会打印hello,字符串打印遇\0停止，后面内容不打印
//	printf("%s\n", src);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//strcat     字符串拼接，把后一个拼到前一个后面('\0'处)
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

//int main()
//{
//	char src[] = "hello\0ac12";
//	char dst[16];  
//	printf("%d\n", sizeof(src));     //11
//	strncpy(dst, src, sizeof(src));  //拷贝后dst为：hello\0\0\0\0\0\0加上五个随机值
//	printf("%s\n", dst);          //打印只会打印hello,字符串打印遇\0停止，后面内容不打印
//	printf("%s\n", src);
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
//	fputs("hello %d\n", stdout);        //用fputs以puts方式打印
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
//		printf("found %s\n", str[n]);         //str[n]:里面放的是指向字符串的地址
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
//	char str = 'c';            //字符用char接收，字符串用char*接收
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


//int main()                                                      //地址解引用
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


//struct Stu                    //两个结构体类型，哪怕内部成员完全一致，也是两种类型
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
//	p = &stu;                          //warning,类型不一致，p不可存储stu地址
//	system("pause");
//	return 0;
//}

//struct NODE                       //结构体的自引用，此代码不可行，因为无法确定要开辟多大空间
//{                                 //结构体成员中可以放结构体，但不能放自身结构体变量，无法确定需要开辟多大空间
//	int data;                     // 若改成结构体指针则可以自引用
//	struct NODE next;
//};
//
//struct NODE
//{
//	int data;
//	struct NODE* next;           //正确的自引用方式，用结构体指针
//};


//typedef unsigned long long ull;              //typedef的用法，将类型重命名
//int main()
//{
//	ull x = 100;
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}


//typedef struct NODE               //错误代码
//{              
//	int data;
//	node_t* next;                   //类型的使用是要在类型的定义之后的，不能先使用后定义
//}node_t;

//typedef struct NODE               //typedef 将struct NODE重定义为node
//{
//	int data;
//  struct NODE*next;
//}node_t;
//
//int main()
//{
//	node_t s1 = { 16, };         //_t:一般是自定义类型后缀   
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
//	printf("%d\n", sizeof(struct S1));          //大小为12
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
//	printf("%d\n", sizeof(struct S1));          //大小为8
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
//	char* arr[3];   //12      //这里数组的对齐数是4,12是整个数组的大小
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
//	char* arr[3];   //12      //这里数组的对齐数是4,12是整个数组的大小
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

//#pragma pack(4)        //设置默认对齐数为4
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()          //取消设置的默认对齐数，还原为默认

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//}a;
//int main()                                 //位段：声明和结构体类似，不同点为：
//{                                          //1.位段的成员必须是 int、unsigned int 、signed int 、char。
//	printf("%d\n", sizeof(a));               //2.位段的成员名后边有一个冒号和一个数字。（代表所要使用的比特位个数）
//	system("pause");
//	return 0;
//}

//struct A                                    //位段：一种压缩存储方案，不考虑效率问题，考虑空间使用率
//{                                           //位段代码缺点：可移植性较差
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
//	YELLOW=2,               //可以赋值
//	BLUE,                   //{}中为枚举常量,内容用','隔开
//	PINK,
//	BLACK
//}c;
//int main()                  //枚举    即一一列举
//{                           
//	enum color c = BLUE;    //枚举变量里只能放枚举常量，才不会出现类型的差异。
//	printf("%d\n", c);      //枚举变量c与枚举常量其实本质上都为int 类型
//	system("pause");
//	return 0;
//}


//union Un                        //联合类型的声明
//{
//	char c;
//	int i;                     //成员公用同一块空间（所以联合也叫共用体）
//}s;
//int main()                         //联合体（共用体）
//{
//	printf("%d\n", sizeof(s));
//	printf("%p\n", &(s.c));       //地址相同，成员公用一块空间
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
//	union Un un;       //联合变量的定义
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);          //0x11223355
//	system("pause");
//	return 0;
//}


//union Un1
//{
//	char c[5];            //5           //公用所以为8
//	int i;                //4             
//}s;
//int main()                              //联合体要内存对齐
//{                                       //对齐规则是：对齐到最大对齐数的整数倍
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
//int main()                        //联合体判断大小端
//{
//	s.i = 1;
//	printf("%d\n", (s.c));        //输出为1则为小端存储，输出为0是大端   
//	system("pause");
//	return 0;
//}


//int main()                                          //malloc           动态内存管理
//{                                                   //void* malloc (size_t size);
//	int *mem = (int*)malloc(sizeof(int)* 10);    //这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针
//	if (NULL == mem)            //开辟成功，则返回一个指向开辟好空间的指针。开辟失败，返回一个NULL指针，因此malloc的返回值一定要做检查。
//	{                                          //mem栈区开辟空间，malloc堆区开辟空间，mem从栈区指向堆区
//		printf("malloc error\n");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)              //malloc和free都声明在 stdlib.h 头文件中
//	{
//		printf("%d ",*(mem + i) = i);
//	}
//	printf("\n");                              //free
//	free(mem);                                 //void free (void* ptr);
//	mem = NULL;                                //free函数用来释放动态开辟的内存,不能局部释放也不能重复释放
//	system("pause");                           //若忘记释放，可能造成内存泄漏的问题
//	return 0;
//}

//int main()
//{
//	/*int a[1000 * 1000];*/       //栈上开辟的空间时固定的，并且太大的数组开辟不了，受限制
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
//	free(p);         //free前与free后，指针所指向的地址不发生任何变化，改变的是该指针与内存的关联关系
//	printf("after:%p\n", p);
//	p = NULL;        //所以p仍是指向堆区，但不可访问，最好置空
//	system("pause");
//	return 0;
//}


//int main()
//{                                        //calloc
//	int *p = (int*)calloc(5, 4);         //void* calloc (size_t num, size_t size)  这里开辟了20个字节
//	if (NULL == calloc)                  //函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0
//	{                                    //与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0
//		printf("calloc error\n");
//		return 1;
//	}
//	printf("calloc success\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


//int main()                        //realloc    对动态开辟内存的大小进行调整
//{                                 //void* realloc (void* ptr, size_t size)
//	int *p = (int *)malloc(20);   //  ptr 是要调整的内存地址   size 调整之后新大小  返回值为调整之后的内存起始位置
//	if (NULL == p)                //realloc调整内存空间存在两种情况:
//	{                             //1:原有空间之后有足够大的空间   2:原有空间之后没有足够大的空间
//		return 1;                 //情况1，直接原有内存之后直接追加空间
//	}                             //情况2，在堆空间上另找一个合适大小的连续空间来使用。这样函数返回的是一个新的内存地址
//	printf("malloc success!\n");
//	//p = realloc(p, 10); //错误写法，若申请失败返回NULL，会将指向老空间的p赋值空，不再指向老空间，可能导致内存泄漏
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

////常见的动态内存错误
////1，对NULL指针的解引用操作
//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;                                   //可能申请失败，申请失败解引用变为野指针，所以需要判断
//	free(p);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int *p = (int *)malloc(INT_MAX / 4);      //正确
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


////2,对动态开辟空间的越界访问
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
//		*(p + i) = i;                     //当i是10的时候越界访问
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

////3,对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);                       //free不能对非动态开辟的内存使用
//	system("pause");
//	return 0;
//}


////4，使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);                  //p不再指向动态内存的起始位置,free不能局部释放
//	system("pause");
//	return 0;
//}

////5，对同一块动态内存多次释放
//int main()
//{
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);               //重复释放,free不能重复释放
//	system("pause");
//	return 0;
//}

////6，动态开辟内存忘记释放（内存泄漏）
//int main()
//{
//	int *p = (int *)malloc(sizeof(int)* 4);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;                                //未使用free释放内存，可能会造成内存泄漏
//	system("pause");
//	return 0;
//}

////动态内存管理几个经典笔试题
//void GetMemory(char* p)            
//{
//	p = (char*)malloc(100);        //1，未进行判断是否申请成功  2，p为形参，对p的操作影响不到str，str依然为NULL  3，未进行动态内存的释放
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");   //解决方案：方案一： void GetMemory(char** p)    方案二：char* GetMemory(char* p)
//	printf(str);
//	system("pause");
//	return 0;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//int main()                          //方案一
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
//int main()                           //方案二
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
//}                         //GetMemory函数栈帧释放后，数据未被消除，但调用printf又形成新栈帧，导致之前数据被覆盖，所以是随机值
//int main()                             //打印出来为随机值
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
//	free(str);                            //free后p为野指针，仍然指向堆区，但不可访问
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
//	int arr[];                                       //柔性数组成员
//}s_t;
//int main()                                         //柔性数组：结构中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员
//{                                                        
//	s_t* p = (s_t*)malloc(sizeof(s_t)+sizeof(int)* 10);    //1，sizeof 返回的这种结构大小不包括柔性数组的内存
//	if (NULL == p)                       //包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小
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
//int main()                 //用指针实现柔性数组的功能
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

//int main()                                    //"r":只读    "w":只写（覆盖式写） "a":追加（在尾部进行再次书写）
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
//	FILE* fp = fopen("C:\\Users\\DELL\\Documents\\Visual Studio 2013\\Projects\\文件操作\\test_.log", "r");
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
//	int c = 'x';                              // 注意：int，非char，要求处理EOF
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
//	FILE* fp = fopen("test.log", "w");    //SEEK_CUR:当前位置   SEEK_SET:开头位置  SEEK_END:结尾位置
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
//	fseek(fp, 3, SEEK_END);        //位置为z的后一个位置
//	fputs("XYZ", fp);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//int main()                                  //用fseek与ftell计算一个文件的大小
//{
//	FILE* fp = fopen("test.log", "r");        //文件每次打开进行"r"与"w"时都时回到开头（偏移量为0的位置）
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
//	FILE* fp = fopen("test.log", "r");    //回到文件的起始位置
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

//int main()                          //二进制文件
//{
//	int a = 10000;
//	FILE* fp = fopen("test.txt", "wb");   //"wb":二进制输出（实际只起强调作用，实际输入文本还是文件得看接口）
//	if (NULL == fp)
//	{
//		return 1;
//	}
//	fwrite(&a, sizeof(int), 1, fp);       //fwrite   二进制的形式输出到文件中
//	fclose(fp);                           //size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	fp = NULL;
//	system("pause");
//	return 0;
//}

//int main()                      //打开方式用"wb"，接口用fprintf，得到的是文本文件
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

//int main()                                //打开方式用"w"，接口用fwrite，得到的是文本文件
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

//int main()                                  //打开方式用"w"，接口用fprintf，得到的是文本文件
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
//	int c;                                     // 注意：int，非char，要求处理EOF
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
//	FILE* fp = fopen("data.txt", "wb+");       //打开方式：读写
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
//	rewind(fp);                             //写入后回到最开始进行读取
//	printf("%d\n", ftell(fp));
//	double b[3] = { 0.0 };
//	while (fread(b, sizeof(double), 3, fp)>0)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%f\n", b[i]);           //双层循环，打印12次，后面两个为缓冲区未被覆盖的遗留值
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
//	FILE* p = fopen("data.txt", "rb");              //文件关闭后再次打开
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

//int main()                                   //缓冲区(本质上为一块内存)
//{                                            //无缓冲：没有缓冲区     
//	FILE* fp = fopen("data.txt", "wb");        //行缓冲：通常是用于显示器上（用特殊字符触发刷新机制）
//	if (NULL == fp)                            //全缓冲：通常是用于普通文件（写满才刷新）
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
//	fflush(fp);                             //强制刷新
//	printf("fflush done...\n");
//	Sleep(1000);
//	printf("sleep ing...\n");
//	Sleep(5000);
//	printf("sleep end...\n");
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//#define ADD(x,y) x+y   //格式最好写成：#define ADD(x,y) ((x)+(y))     
//int main()
//{
//	printf("%d\n", ADD(10, 20));
//	printf("%d\n", 10 * ADD(10, 20));    //宏替换后为10*10+20
//	system("pause");
//	return 0;
//}

//#define M 2
//#define SEQ(x) ((x)*(x))
////#define A B                     //错误（递归）
////#define B A
//int main()                        //宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归
//{
//	printf("%d\n", SEQ(M));         //宏替换规则本质上是由内到外
//	system("pause");
//	return 0;
//}


//#define M 10
//int main()       
//{
//	printf("%d\n", M);
//	printf("helloM\n");            //当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索
//	int aM = 10;                   //此处的M也不会被替换
//	system("pause");
//	return 0;
//}


//int main()                                //相邻字符串自动连接特性
//{
//	printf("hello""world""hello""bit\n");
//	const char* str = "hello""world";
//	printf(str);
//	system("pause");
//	return 0;
//}

//#define PRINT(s) printf(#s)
//int main()                              //#
//{                                       //使用 # ，把一个宏参数变成对应的字符串
//	PRINT(10 + 20 + 30);                  //即把10+20+30替换为"10+20+30"
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
//{                                   //##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符
//	int sum1 = 10;                  //注： 这样的连接必须产生一个合法的标识符。否则其结果就是未定义的
//	printf("sum1=%d\n", sum1);
//	MAKE(1, 20);
//	printf("sum1=%d\n", sum1);
//	system("pause");
//	return 0;
//}

//#undef 这条指令用于移除一个宏定义。

//int main()                         //语言内置预定义符号
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	system("pause");
//	return 0;
//}

////#define F 1
//#define F              //可以不定义值
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
//#define a              //不可以不定义值
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
//#if a==1                 //1、宏已定义  2、宏有值
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
//#define F           //若未定义F，则定义F
//	printf("1");
//#endif
//#ifndef F           //F已定义不再进行定义，常用于避免头文件的重复引入
//#define F
//	printf("2");
//#endif
//	system("pause");
//	return 0;
//}

//避免头文件重复引入的两种方式：1，#pragma once
//                              2，#ifndef  _TEST_H_ 
//                                 #define  _TEST_H_ 
//                                //头文件内容
//                                 #endif
//1, #pragma warning (disable:4996)
//2, #pragma once 
//3, #pragma pack()      //结构体默认对齐数的设置