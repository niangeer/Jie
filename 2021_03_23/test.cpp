#include <iostream>
#include <string>
using namespace std;

//string:以char类型实例化 basic_string模板的类

////string 构造函数
//int main()
//{
//	string s0("Init string");
//	string s1;                        //无参构造函数，结果为空字符串（有'\0'）  //string();
//	string s2(s0);                    //拷贝构造函数                            //string(const string& str);
//	string s3(s0, 2, string::npos);   //从下标为2处拷贝至最后                   //string(const string& str,size_t pos,size_t len=npos);
//	string s4("hello world");         //以字符串初始化对象                      //string(const char* s);
//	string s5("hello world", 7);      //复制字符串中的前7个字符                 //string(const char* s,size_t n);
//	string s6(10,'C');               //构造10个'C'字符                          //string(size_t n,char c);
//	
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//	system("pause");
//	return 0;
//}

////string 赋值运算符重载
//int main()
//{
//	string s0("Init string");
//	string s1("hello bit"); 
//	s0 = s1;                            //将一个s1赋值给s0      //string& operator=(const string& str);
//	cout << s0 << "\n" << s1 << endl;   //结果为 hello bit\0
//
//	s0 = "cd";                          //将字符串赋值给s0      //string& operator=(const char* s);
//	cout << s0 << endl;                 //结果为 cd\0
//	 
//	s0 = 'a';                           //将字符赋值给s0        //string& operator=(char c);
//	cout << s0 << endl;                 //结果为 a\0
//
//	system("pause");
//	return 0;
//}


////string 容量操作接口
//int main()
//{
//	string s0("Init string");
//
//	cout << s0.size() << endl;   //有效元素的个数
//	cout << s0.capacity() << endl;  //容量大小
//	cout << s0.empty() << endl;  //是否为空
//	//s0.clear();                  //清空有效数据
//
//	s0.resize(5,'a');            //将有效元素改至5个，若不满5个，则用'a'填充至5个
//	cout << s0 << endl;
//	s0.resize(20);               //可用缺省值'\0'   resize参数大于容量时，会自动扩容
//	cout << s0 << endl;
//
//	//reserve:预留空间大小
//	string s1("12411111412414adadasdasada");   //reserve参数小于string的底层空间大小时，不会将空间缩小
//	s1.reserve(5);
//	cout << s1 << endl;
//
//	system("pause");
//	return 0;
//}

////字符操作
//int main()
//{
//	string s0("Hello");
//	const string s1("hello");
//	cout << s0 << "\n" << s1 << endl;
//
//	//operator[]   []操作符重载：返回pos位置的字符
//	s0[0] = 'h';
//	cout << s0 << endl;
//
//	//s1[0] = 'H';     //const类型对象不能修改
//
//	system("pause");
//	return 0;
//}

////string 的三种遍历
//int main()
//{
//	string s("Init string,hello bit");
//	
//	//1，for+operator[]   []操作符重载：返回pos位置的字符，返回值为char& :1,支持外面调用的地方修改返回对象  2，减少拷贝
//	for (size_t i = 0; i < s.size(); i++)
//	{
//		cout << s[i];
//	}
//	cout << endl;
//
//	//2，迭代器（iterator）四种类型，正向、反向、const正向、const反向
//	string::iterator it= s.begin();   //迭代器，end获取最后一个字符下一个位置的迭代器
//	//auto it = s.begin();            //auto 自动推导类型，自动推导了迭代器类型
//	while (it != s.end())
//	{
//		cout << *it;
//		it++;
//	}
//	cout << endl;
//
//	//3，范围for
//	for (auto e : s)
//	{
//		cout << e;   //打印e
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

////修改操作
//int main()
//{
//	string s0("Hello");
//
//	//operator += : +=操作符重载
//	s0 += " world";     //可加字符串,相当于append
//	//s0.append(" Bit");
//	cout << s0 << endl;
//
//	s0 += '!';          //可加字符,相当于push_back
//	//s0.push_back('!');
//	cout << s0 << endl;
//
//	s0.push_back('\0');
//	s0.push_back('\0');
//	s0 += "Hello bit";
//	cout << s0 << endl;        //将'\0'也一起打印
//
//	cout <<s0.c_str() << endl;  //c_str:以C语言的方式打印字符串,遇'\0'则停止
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	string s0("hello world");
//
//	//insert ：从pos处插入   //一般不建议使用，因为需要挪动数据
//	s0.insert(5, " bit, hello");
//	cout << s0 << endl;
//
//	//erase : 删除字符串中的字符
//	s0.erase(0, 6);
//	cout << s0 << endl;
//
//	//find ：查找字符   rfind:从后往前找
//	cout << s0.find(",", 0) << endl;  //找到返回下标位置
//	cout << s0.find('.',0) << endl;   //找不到返回npos
//
//	//substr : 在str中从pos位置开始，截取n个字符，然后将其返回   
//	//string substr (size_t pos = 0, size_t len = npos) const;
//	cout << s0.substr(0, 3) << endl;
//
//	system("pause");
//	return 0;
//}

////string类非成员函数
//int main()
//{
//	//operator+ :支持两对象相加，也支持字符串相加或对象加字符串
//	string s0("hello");
//	string s1(" world");
//	cout << s0 + s1 << endl;
//
//	//getline : 获取一行字符串
//	//istream＆getline（istream＆is，string＆str，char delim）;
//	std::string name;
//
//	cout << "Please, enter your full name: ";
//	getline(cin, name);
//	cout << "Hello, " << name << "!\n";
//
//	system("pause");
//	return 0;
//}