/*杨辉三角的变形
  1

  1  1  1

  1  2  3  2  1

  1  3  6  7  6  3  1

  1  4  10 16 19  16 10  4  1
  以上三角形的数阵，第一行只有一个数1，以下每行的每个数，
  是恰好是它上面的数，左上角数到右上角的数，3个数之和（如果不存在某个数，认为该数就是0）。
  求第n行第一个偶数出现的位置。如果没有偶数，则输出-1。例如输入3,则输出2，输入4则输出3。

  输入描述:输入一个int整数
  输出描述:输出返回的int值

  示例1
      输入：
	    4
	    2
	  输出：
	    3
		-1 
  链接：https://www.nowcoder.com/questionTerminal/8ef655edf42d4e08b44be4d777edbf43  
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
		vv.resize(n); //开辟构建杨辉三角的空间
		for (size_t i = 0; i < vv.size(); i++)
		{
			//开辟每个vector<int>的空间
			vv[i].resize(1 + 2 * i, 0);
			//每行第一个与最后一个元素置为1
			vv[i][0] = 1;
			vv[i][2 * i] = 1;
			//除了第一行，每行的第二个与倒数第二个元素等于行数
			if (i > 0)
			{
				vv[i][1] = i;
				vv[i][2 * i - 1] = i;
			}
		}
		//将每行等于0的元素进行赋值
		for (size_t i = 0; i < vv.size(); i++)
		{
			for (size_t j = 0; j < vv[i].size(); j++)
			{
				if (vv[i][j] == 0)
				{ //当前元素值等于上一行的(pos-2)位置+(pos-1)位置+pos位置
					vv[i][j] = vv[i - 1][j - 2] + vv[i - 1][j - 1] + vv[i - 1][j];
				}
			}
		}
		//前两行没有偶数
		if (n < 3)
		{
			cout << "-1" << endl;
			return 0;
		}
		//遍历第n行的元素，遇偶数返回
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