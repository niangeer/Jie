#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

//struct Book               //�������ͣ���ʡ��Book����Ϊ����    //�ṹ��
//{
//	char name[20];          //�ṹ��ĳ�Ա����
//	int price;
//};                       //�˴����Լӱ�����
//int main()
//{
//	struct Book a = { "C���Գ������", 15 };  //��ʼ�������������ͬʱ����ֵ
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
//	printf("%d\n", sizeof(stu));
//	printf("%p\n", &stu);         //�����ṹ��ĵ�ַ
//	printf("%p\n", &(stu.age));   //ȡ���ṹ���Ա��age�ĵ�ַ
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


//1��CPUʵ���ڷô��ʱ�򣬲����ܹ����������ַ�ġ� 2��CPU�ô��������ĳЩӲ��ԭ����зô档
//ΪʲôҪ�ڴ���룺����������ڴ���룬��Ϊƽ̨���ƻᵼ�·ô�Ĵ������ӣ���������Ч��
//ʲô���ڴ���룺ͨ�������ռ�ķ�������ȡЧ�ʵ����������ڴ����
//��ô�죺1����һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��������һ����Ա����Ҫ���룬ֱ�Ӵ�ţ�
//        2�������ṹ���Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//		  3���ṹ���ܴ�СΪ����������ÿһ����Ա��������һ������������������
//		  4�����Ƕ���˽ṹ�壬Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����
//		     ����������������Ƕ�׽ṹ��Ķ���������������
//
//		  ���룺������ʼƫ�����ܹ��������Ķ�����
//		  ��������������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ  ��intΪ4  charΪ1 doubleΪ8������������
//		  ��һ����Ա���͵Ĵ�СҲҪ�������������ıȽ�
//        �ṹ��Ķ���������ṹ���ڵ���������


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