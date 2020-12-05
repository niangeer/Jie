#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

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


int main()                                       //sizeof本质上是求类型的大小，而不是变量的大小
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));                   //48      整个数组
	printf("%d\n", sizeof(a[0][0]));             //4       整个数组的第一个元素
	printf("%d\n", sizeof(a[0]));                //16      数组1（第一个一维数组）
	printf("%d\n", sizeof(a[0]+1));              //4       第二个元素的地址
	printf("%d\n", sizeof(*(a[0]+1)));           //4       第二个元素
	printf("%d\n", sizeof(a + 1));               //4       数组2的地址
	printf("%d\n", sizeof(*(a + 1)));            //16      数组2
	printf("%d\n", sizeof(&a[0] + 1));           //4       数组2的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));        //16      数组2
	printf("%d\n", sizeof(*a));                  //16      数组1
	printf("%d\n", sizeof(a[3]));                //16      数组4（C语言中允许，只是读取没有使用）
	system("pause");
	return 0;
}