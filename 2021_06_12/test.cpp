//�������ĺ���������ǵݹ�
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
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> v;
		TreeNode* cur = root;
		TreeNode* prev = nullptr;
		stack<TreeNode*> st;

		while (cur || !st.empty())
		{
			//1��������·�ڵ���ջ
			while (cur)
			{
				st.push(cur);
				cur = cur->left;
			}
			//2������root�������ʣ�µ�����·�ڵ����·�ڵ�������û�з���
			//���δ�ջ�����ó�������
			TreeNode* top = st.top();

			//�����Ϊ�գ������Һ��ӵ�����һ�����ʵĽڵ㣬��ô˵���������Ѿ����ʹ���
			//ȡ����ǰ�ڵ����
			if (top->right == nullptr || top->right == prev)
			{
				v.push_back(top->val);
				prev = top;
				st.pop();
			}
			else
			{
				//������������
				cur = top->right;
			}
		}
		return v;
	}
};