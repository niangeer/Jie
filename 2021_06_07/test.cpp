//��Ŀ���������Ĳ�������
//
//��Ŀ����������һ�������������㷵���䰴 ������� �õ��Ľڵ�ֵ�� �������أ������ҷ������нڵ㣩��
//
//ʾ����
//���룺[3, 9, 20, null, null, 15, 7],
//�����[
//	    [3],
//		[9, 20],
//		[15, 7]
//      ]

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int> > vv;
		if (root == nullptr)
			return vv;

		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			int levelSize = q.size();//��ȡ��ǰ�����ݸ���

			//һ���������Ұ���һ��Ľڵ㶼�뵽����
			//��ǰ������Ժ󣬶����д�ľ�����һ������нڵ�
			vector<int> v;
			while (levelSize--)
			{
				v.push_back(q.front()->val);
				if (q.front()->left)
					q.push(q.front()->left);
				if (q.front()->right)
					q.push(q.front()->right);

				q.pop();
			}
			vv.push_back(v);
		}
		return vv;
	}
};
