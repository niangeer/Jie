/*������ǵı���
  1

  1  1  1

  1  2  3  2  1

  1  3  6  7  6  3  1

  1  4  10 16 19  16 10  4  1
  ���������ε����󣬵�һ��ֻ��һ����1������ÿ�е�ÿ������
  ��ǡ������������������Ͻ��������Ͻǵ�����3����֮�ͣ����������ĳ��������Ϊ��������0����
  ���n�е�һ��ż�����ֵ�λ�á����û��ż���������-1����������3,�����2������4�����3��

  ��������:����һ��int����
  �������:������ص�intֵ

  ʾ��1
      ���룺
	    4
	    2
	  �����
	    3
		-1 
  ���ӣ�https://www.nowcoder.com/questionTerminal/8ef655edf42d4e08b44be4d777edbf43  
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<vector<int>> vv;
		vv.resize(n); //���ٹ���������ǵĿռ�
		for (size_t i = 0; i < vv.size(); i++)
		{
			//����ÿ��vector<int>�Ŀռ�
			vv[i].resize(1 + 2 * i, 0);
			//ÿ�е�һ�������һ��Ԫ����Ϊ1
			vv[i][0] = 1;
			vv[i][2 * i] = 1;
			//���˵�һ�У�ÿ�еĵڶ����뵹���ڶ���Ԫ�ص�������
			if (i > 0)
			{
				vv[i][1] = i;
				vv[i][2 * i - 1] = i;
			}
		}
		//��ÿ�е���0��Ԫ�ؽ��и�ֵ
		for (size_t i = 0; i < vv.size(); i++)
		{
			for (size_t j = 0; j < vv[i].size(); j++)
			{
				if (vv[i][j] == 0)
				{ //��ǰԪ��ֵ������һ�е�(pos-2)λ��+(pos-1)λ��+posλ��
					vv[i][j] = vv[i - 1][j - 2] + vv[i - 1][j - 1] + vv[i - 1][j];
				}
			}
		}
		//ǰ����û��ż��
		if (n < 3)
		{
			cout << "-1" << endl;
			return 0;
		}
		//������n�е�Ԫ�أ���ż������
		for (size_t i = 0; i < vv[n - 1].size(); i++)
		{
			if (vv[n - 1][i] % 2 == 0)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}