//�ǵݹ������ǰ�����

#include <iostream>
#include <vector>
#include <stack>
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
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> v;
		TreeNode* cur = root;
		stack<TreeNode*> st;

		//cur��Ϊ�գ���ʾ������û�п�ʼ����
		//st��Ϊ�գ���ʾ���нڵ��������û�з���
		while (cur || !st.empty())
		{
			//1�����ʲ�����·�ڵ���ջ
			while (cur)
			{
				st.push(cur);
				v.push_back(cur->val);
				cur = cur->left;
			}

			//2������root�������ʣ�µ�����·�ڵ��������û�з���
			//���δ�ջ�����ó�������
			TreeNode* top = st.top();
			st.pop();

			//�����⣺������
			cur = top->right;
		}
		return v;
	}
};
