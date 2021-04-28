#include <iostream>
#include <vector>
using namespace std;

//vector���캯��
void TestConstructor()
{
	vector<int> v1;                //�޲�          
	cout << v1.size() << " ";
	cout << v1.capacity() << " ";
	cout << v1.empty() << endl;

	vector<int> v2(10, 3);       //����10���ռ䣬������0��俪�ٿռ�
	cout << v2.size() << " ";
	cout << v2.capacity() << " ";
	cout << v2.empty() << endl;

	vector<int> v3(10);          //����10���ռ䣬����Ĭ��Ϊ0
	cout << v3.size() << " ";
	cout << v3.capacity() << " ";
	cout << v3.empty() << endl;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	vector<int> v4(arr, arr + sizeof(arr) / sizeof(arr[0]));  //�õ�������ָ�룩���г�ʼ��
	cout << v4.size() << " ";
	cout << v4.capacity() << " ";
	cout << v4.empty() << endl;

	//vector �Ŀ�������
	vector<int> v5(v2);
	cout << v5.size() << " ";
	cout << v5.capacity() << " ";
	cout << v5.empty() << endl;
}

void TestIterator()
{
	vector<int> v1(10);

	for (size_t i = 0; i < v1.size(); i++)  //��[]���б���
	{
		v1[i] = i;
	}

	vector<int>::iterator it = v1.begin();
	while (it != v1.end())       //ʹ�õ���������
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	for (auto e : v1)            //ʹ�÷�Χfor���д�ӡ�������Զ�����������������ݣ����ʹ��
	{                            //for(const auto& e : v1) ; ��Ϊ�ǽ�v1��ֵ��e���ᷢ������
		cout << e << " ";
	}
	cout << endl;
}

void TestCapacity()
{
	vector<int> v;
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.reserve(10);
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.resize(20);     //Ĭ����0���
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;

	v.reserve(10);     //����������С
	cout << v.size() << " ";
	cout << v.capacity() << " ";
	cout << v.empty() << endl;
}

void TestElement()
{
	vector<int> v(10);

	for (size_t i = 0; i < v.size(); i++)
	{
		v[i] = i;
	}
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.front() << endl;  //��һ������
	cout << v.back() << endl;   //���һ������
}

void TestModifiers()
{
	vector<int> v(10);
	vector<int>::iterator it = v.begin();
	int count = 0;
	while (it != v.end())
	{
		v[count] = count;
		count++;
		it++;
	}

	v.pop_back();     //βɾ
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	v.push_back(9);    //β��
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	auto ret = find(v.begin(), v.end(), 9);   //find
	if (ret == v.end())
	{
		cout << "δ�ҵ�����" << endl;
	}
	else
	{
		cout << *ret << endl;
	}

	v.insert(v.end(), 5, 1);   //insert
	it = v.begin();
	while (it != v.end())     
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	it = v.begin(); 
	ret = find(v.begin(), v.end(), 9);
	v.erase(ret);            //erase
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	vector<int> v1;     
	v1.swap(v);           //swap������v��v1�����ݿռ�

	v1.clear();           //������ݣ�����������

}
int main()
{
	//TestConstructor();
	//TestIterator();
	//TestCapacity();
	//TestElement();
	TestModifiers();

	system("pause");
	return 0;
}