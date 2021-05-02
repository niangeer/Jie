#include <iostream>
#include <assert.h>
using namespace std;

namespace jzh
{
	//节点，存储数据
	template<class T>
	struct __list_node
	{
		T _data;
		__list_node<T>* _next; //标准库为void*,后面使用时进行强转
		__list_node<T>* _prev; //标准库为void*,后面使用时进行强转

		__list_node(const T& data = T())
			:_data(data)
			, _next(nullptr)
			, _prev(nullptr)
		{}
	};

	//迭代器
	template<class T, class Ref, class Ptr> //类设计的复用
	//__list_iterator<T, T&, T*>  : iterator 
	//__list_iterator<T, const& T, const T> : const_iterator 
	class __list_iterator
	{
	public:
		typedef __list_iterator<T, Ref, Ptr> self;
		typedef __list_node<T>* link_type;

		link_type _node;

		__list_iterator(link_type node = nullptr)
			:_node(node)
		{}

		//这里不涉及深拷贝，拷贝构造、赋值、析构可用系统自动生成的
		__list_iterator(const self& x)
			:_node(x._node)
		{}

		bool operator==(const self& x)const
		{
			return _node == x._node;
		}
		bool operator!=(const self& x)const
		{
			return _node != x._node;
		}

		//Ref : T& 或 const T&
		Ref operator*()const
		{
			return _node->_data;
		}

		//Ptr : T* 或 const T*
		Ptr operator->()const
		{
			return &(operator*());
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		self operator--(int)
		{
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}
	};

	//链表结构
	template<class T>
	class list
	{
		typedef __list_node<T> list_node;
	public:
		typedef list_node* link_type;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		iterator begin()
		{
			//单参数构造函数会自动隐式类型转化为return iterator(_head->_next);
			return _head->_next;
		}
		iterator end()
		{
			return _head;
		}
		const_iterator begin()const
		{
			return _head->_next;
		}
		const_iterator end()const
		{
			return _head;
		}

		list()
		{
			CreateHead();
		}

		void push_back(const T& x)
		{
			link_type node = new list_node(x);
			link_type tail = _head->_prev;
			tail->_next = node;
			node->_prev = tail;

			node->_next = _head;
			_head->_prev = node;
		}
	private:
		void CreateHead()
		{
			_head = new list_node;
			_head->_next = _head;
			_head->_prev = _head;
		}
	private:
		link_type _head;
	};
}