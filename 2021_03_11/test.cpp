#include <iostream>
#pragma warning (disable:4996)

using std::cout;
using std::endl;

//�����ռ�Ŀ�ģ��Ա�ʶ�������ƽ��б��ػ����Ա���������ͻ��������Ⱦ
//1,��ͨ�������ռ�
namespace N1          //N1Ϊ�����ռ������
{
	// �����ռ��е����ݣ��ȿ��Զ��������Ҳ���Զ��庯��
	int a = 10;
	int b = 20;
	int Add(int x, int y)
	{
		return x + y;
	}
}

//2,�����ռ����Ƕ��
namespace N2
{
	int a = 5;
	int b = 10;
	namespace N3
	{
		int a = 1;
		int b = 2;
	}
}

//3. ͬһ��������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ��С�
namespace N1
{

	//int a = 10;      //��������ͬ�����ռ����ظ�����
	int Mul(int left, int right)
	{
		return left * right;
	}
}

int main()
{
	//int a = 1, b = 2;
	//cout << N1::Add(a, b) << endl;

	//cout << N2::a << " " << N2::b << endl;
	//cout << N2::N3::a << " " << N2::N3::b << endl;

	cout << N1::Mul(20, 4) << endl;
	system("pause");
	return 0;
}



////�����ռ� - ��
//namespace jzh
//{
//	int scanf = 0; //���Ǹ�ȫ�ֱ������ŵ�jzh�����ռ�����
//}
//
//int main()
//{
//	cout << jzh::scanf << endl;
//	system("pause");
//	return 0;
//}



//namespace jzh            //�����ռ������ʹ�÷�ʽ
//{                        //1���������ռ����Ƽ��������޶���            jzh::a
//	int a = 10;            //2��ʹ��using�������ռ��г�Ա����           using jzh::a;  
//}                        //3��ʹ��using namespace �����ռ���������    using namespace jzh;
//
////using jzh::a;       //����չ��
//using namespace jzh;  //ȫչ��
//
//int main()
//{
//	cout << jzh::a << endl;  //ֱ��ָ��
//	cout << a << endl;
//	system("pause");
//	return 0;
//}



//namespace jzh
//{
//	int a = 10;
//}
//
//namespace n
//{
//	int a = 20;
//}
//
//int main()
//{
//	cout << jzh::a << endl;   //���Ϊ10
//	cout << n::a << endl;     //���Ϊ20
//	system("pause");
//	return 0;
//}