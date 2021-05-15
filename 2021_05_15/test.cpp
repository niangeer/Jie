/*构建一个杨辉三角
  杨辉三角定义：在杨辉三角中，每个数是它左上方和右上方的数的和。
  给定一个非负整数 numRows，生成杨辉三角的前 numRows 行*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	// 核心思想：找出杨辉三角的规律，发现每一行头尾都是1，中间第[j]个数等于上一行[j-1]+[j]
	vector<vector<int>> generate(int numRows) {
		vector<vector<int> > vv;
		//开辟构建杨辉三角的空间
		vv.resize(numRows);
		for (int i = 0; i < numRows; i++)
		{
			vv[i].resize(i + 1);

			//每一行首元素与最后一个元素都是1
			vv[i][0] = 1;
			vv[i][i] = 1;
		}

		for (int i = 2; i < numRows; i++)
		{
			//中间第[j]个数等于上一行[j-1]+[j]
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