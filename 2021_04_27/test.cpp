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

void Test()
{
	vector<int> v1(10);

	for (size_t i = 0; i < v1.size(); i++)  //��[]���б���
	{
		cin >> v1[i];
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

int main()
{
	TestConstructor();
	//Test();

	system("pause");
	return 0;
}