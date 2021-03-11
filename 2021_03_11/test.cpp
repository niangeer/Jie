#include <iostream>
#pragma warning (disable:4996)

using std::cout;
using std::endl;

//命名空间目的：对标识符的名称进行本地化，以避免命名冲突或名字污染
//1,普通的命名空间
namespace N1          //N1为命名空间的名称
{
	// 命名空间中的内容，既可以定义变量，也可以定义函数
	int a = 10;
	int b = 20;
	int Add(int x, int y)
	{
		return x + y;
	}
}

//2,命名空间可以嵌套
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

//3. 同一个工程中允许存在多个相同名称的命名空间,编译器最后会合成同一个命名空间中。
namespace N1
{

	//int a = 10;      //不能在相同命名空间中重复定义
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



////命名空间 - 域
//namespace jzh
//{
//	int scanf = 0; //还是个全局变量，放到jzh命名空间域中
//}
//
//int main()
//{
//	cout << jzh::scanf << endl;
//	system("pause");
//	return 0;
//}



//namespace jzh            //命名空间的三种使用方式
//{                        //1：加命名空间名称及作用域限定符            jzh::a
//	int a = 10;            //2：使用using将命名空间中成员引入           using jzh::a;  
//}                        //3：使用using namespace 命名空间名称引入    using namespace jzh;
//
////using jzh::a;       //单独展开
//using namespace jzh;  //全展开
//
//int main()
//{
//	cout << jzh::a << endl;  //直接指定
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
//	cout << jzh::a << endl;   //输出为10
//	cout << n::a << endl;     //输出为20
//	system("pause");
//	return 0;
//}