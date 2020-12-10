#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//struct Book               //声明类型，若省略Book，则为匿名    //结构体
//{
//	char name[20];          //结构体的成员变量
//	int price;
//};                       //此处可以加变量名
//int main()
//{
//	struct Book a = { "C语言程序设计", 15 };  //初始化：定义变量的同时赋初值
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
//	printf("%d\n", sizeof(stu));
//	printf("%p\n", &stu);         //整个结构体的地址
//	printf("%p\n", &(stu.age));   //取出结构体成员的age的地址
//	printf("%p\n", &(stu.name));
//	printf("%p\n", &stu + 1);     
//	printf("%p\n", &(stu.age) + 1);  
//	printf("%p\n", &(stu.name)+1);
//	printf("%p\n", &(stu.sex));
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


//1，CPU实际在访存的时候，不是能够访问任意地址的。 2，CPU访存必须遵守某些硬件原则进行访存。
//为什么要内存对齐：如果不进行内存对齐，因为平台限制会导致访存的次数增加，进而降低效率
//什么是内存对齐：通过牺牲空间的方案来换取效率的提升叫做内存对齐
//怎么办：1，第一个成员在与结构体变量偏移量为0的地址处（即第一个成员不需要对齐，直接存放）
//        2，其它结构体成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//		  3，结构体总大小为最大对齐数（每一个成员变量都有一个对齐数）的整数倍
//		  4，如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是
//		     所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//
//		  对齐：他的起始偏移量能够整除他的对齐数
//		  对齐数：编译器默认的一个对齐数与该成员大小的较小值  （int为4  char为1 double为8。。。。。）
//		  第一个成员类型的大小也要参与最大对齐数的比较
//        结构体的对齐数是其结构体内的最大对齐数


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