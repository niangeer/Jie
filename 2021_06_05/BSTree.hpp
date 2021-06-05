#include <iostream>
#include <string>
using namespace std;

template <class K, class V>
struct BSTreeNode
{
	const K _key;
	V _val;
	BSTreeNode<K, V>* _left;
	BSTreeNode<K, V>* _right;

	BSTreeNode(const K& key = K(), const V& val = V())
		:_key(key)
		, _val(val)
		, _left(nullptr)
		, _right(nullptr)
	{}
};

template<class K, class V>
class BSTree
{
	typedef BSTreeNode<K, V> Node;
public:
	bool Insert(const K& key, const V& val)
	{
		//空树
		if (_root == nullptr)
		{
			_root = new Node(key, val);
			return true;
		}

		//非空时找到插入位置
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}
		Node* newNode = new Node(key, val);
		if (key > parent->_key)  //大于插入右侧
			parent->_right = newNode;
		else                     //小于插入左侧
			parent->_left = newNode;

		return true;
	}

	Node* Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
				cur = cur->_right;
			else if (key < cur->_key)
				cur = cur->_left;
			else
				return cur;
		}
		return nullptr;
	}

	bool Erase(const K& key)
	{
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//准备删除
				//1，左为空
				if (nullptr == cur->_left)
				{
					//特殊情况：cur为根并且parent为nullptr
					if (cur == _root)
						_root = _root->_right;
					else if (parent->_left == cur)
						parent->_left = cur->_right;
					else
						parent->_right = cur->_right;

					delete cur;
				}
				//2，右为空
				else if (nullptr == cur->_right)
				{
					if (cur == _root)
						_root = _root->_left;
					else if (parent->_left == cur)
						parent->_left = cur->_left;
					else
						parent->_right = cur->_left;

					delete cur;
				}
				//3,左右都不为空
				else
				{
					//替代法删除
					//找右子树的最小节点（最左节点），或者左子树的最大节点（最右节点）
					Node* subMin = cur->_right;
					//可能有特殊情况：右子树根就是最小节点，若smParent不能置为空，需要等于cur
					Node* smParent = cur;
					while (subMin->_left)
					{
						smParent = subMin;
						subMin = subMin->_left;
					}
					cur->_key = subMin->_key;
					cur->_val = subMin->_val;

					if (smParent->_left == subMin)
						smParent->_left = subMin->_right;
					else  //特殊情况：cur就是最小节点，此时smParent->right == subMin
						smParent->_right = subMin->_right;

					delete subMin;
				}
				return true;
			}
		}
		return false;
	}

	void _InOrder(Node* root)
	{
		if (nullptr == root)
			return;

		_InOrder(root->_left);
		cout << root->_key << ": " << root->_val << endl;
		_InOrder(root->_right);
	}
	void InOrder()
	{
		_InOrder(_root);
	}
private:
	Node* _root = nullptr;
};