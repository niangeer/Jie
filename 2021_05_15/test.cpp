/*����һ���������
  ������Ƕ��壺����������У�ÿ�����������Ϸ������Ϸ������ĺ͡�
  ����һ���Ǹ����� numRows������������ǵ�ǰ numRows ��*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	// ����˼�룺�ҳ�������ǵĹ��ɣ�����ÿһ��ͷβ����1���м��[j]����������һ��[j-1]+[j]
	vector<vector<int>> generate(int numRows) {
		vector<vector<int> > vv;
		//���ٹ���������ǵĿռ�
		vv.resize(numRows);
		for (int i = 0; i < numRows; i++)
		{
			vv[i].resize(i + 1);

			//ÿһ����Ԫ�������һ��Ԫ�ض���1
			vv[i][0] = 1;
			vv[i][i] = 1;
		}

		for (int i = 2; i < numRows; i++)
		{
			//�м��[j]����������һ��[j-1]+[j]
			for (size_t j = 0; j < vv[i].size(); j++)
			{
				if (vv[i][j] == 0)
				{
					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
				}
			}
		}
		return vv;
	}
};