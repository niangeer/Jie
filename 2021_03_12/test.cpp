#include <iostream>

using namespace std;

//  //���õ�����
//int main()
//{
//	int a = 5;
//	int b = 10;
//
//	//int& c;   // (1) �����ڶ���ʱ�����ʼ��
//	//c = a;
//
//	int& c = a;  //c����a
//	c = b;       //c��ֵb   //(2)����һ������һ��ʵ�壬�ٲ�����������ʵ��
//
//	int& d = a;  // (3) һ�����������ж������
//	int& e = a;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//	cout << e << endl;
//	system("pause");
//	return 0;
//}


////������
////ָ��������ڳ�ʼ����ֵʱ��Ȩ�޿�����С�������ԷŴ�
//int main()
//{
//	const int a = 9;
//
//	//int& ra = a;       //���ó�����������ʱ�����
//	const int& ra = a;
//
//	//int& b = 10;      //���ó���ʱ��������������const int& rb
//	const int& b = 10;
//
//	double c = 2.22;   
//	int d = c;          //���Ͳ�ͬ��ʽת��ʱ������ֱ�Ӹ�ֵ��c�Ὣֵ��������ʱ�ռ䣬��ʱ�ռ��ٿ�����d
//	//int& rc = c;      //����ʱ��������Ͳ�ͬ
//	const int& rc = d;  //��ʱ�������г���
//
//	cout << a << endl;
//	cout << ra << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << rc << endl;
//	cout << d << endl;
//
//	system("pause");
//	return 0;
//}


//ʹ�ó���
//1��������
//<1>��������Ͳ���ʱ�����ô�ָ��Ҳ�ܸı�ԭֵ
//<2>�����ʹ�����ô��ο������Ч��
void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

//2,����������ֵ
//��ע������������ʱ�����˺��������򣬷��ض��󻹸���ϵͳ�����������÷���

//int Count()
//{
//	static int n = 0;
//		n++;
//	// ...
//	return n;     //�����ǰ�n��������ʱ��������ʱ�����ٿ�����ret��(�������ο���)
//}

int& Count()
{
	static int n = 0;
	    n++;
	// ...
	return n;     //������ʱ������n�����ã�δ����������Ȼ����ʱ�����ٿ�����ret��
}                 //�൱��ֱ�Ӱ�n������ret��  ������һ�ο�����

int main()
{
	int a = 5;
	int b = 10;

	Swap(a, b);         
	cout << a << endl;
	cout << b << endl;

	int ret = Count();
	cout << ret << endl;

	system("pause");
	return 0;
}