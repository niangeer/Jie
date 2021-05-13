#include <iostream>
#include <vector>
#include <queue>     //priority_queue容器默认使用vector,底层实际是个heap
#include <algorithm> //堆在stl中不做容器，算是类属算法，分属在algorithm
#include <functional> //greater模仿大堆排升序，less模仿小堆排降序
#include <assert.h>
using namespace std;

namespace jzh
{
	//仿函数, less、greater
	template<class T>
	class less
	{
	public:
		bool operator()(const T& x1, const T& x2)
		{
			return x1 < x2;
		}
	};
	template<class T>
	class greater
	{
	public:
		bool operator()(const T& x1, const T& x2)
		{
			return x1 > x2;
		}
	};

	//       数据类型         容器                       仿函数
	template<class T, class Container = vector<T>, class Compare = less<T>>
	class priority_queue
	{
	public:
		priority_queue()    //空构造
		{}

		template<class InputIterator>  //迭代器构造
		priority_queue(InputIterator first, InputIterator last)
			:_con(first, last)
		{
			for (int i = (_con.size() - 1 - 1) >> 1; i >= 0; i--)
			{
				AdjustDown(i);

			}
		}
		bool empty() const
		{
			return _con.empty();
		}
		size_t size() const
		{
			return _con.size();
		}
		const T& top() const
		{
			return _con.front();
		}
		void push(const T& data)
		{
			_con.push_back(data);
			AdjustUp(_con.size() - 1);
		}
		void pop()
		{
			swap(_con.front(), _con.back());
			_con.pop_back();
			AdjustDown(0);
		}
	private:
		void AdjustDown(int parent)  //向下调整
		{
			Compare com;
			size_t child = parent * 2 + 1;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && com(_con[child], _con[child + 1]))
				{
					child++;
				}
				if (com(_con[parent], _con[child]))
				{
					swap(_con[child], _con[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}
		}
		 
		void AdjustUp(int child)  //向上调整
		{
			Compare com;
			int parent = (child - 1) >> 1;
			while (child > 0)
			{
				if (com(_con[parent], _con[child]))
				{
					swap(_con[child], _con[parent]);
					child = parent;
					parent = (child - 1) >> 1;
				}
				else
				{
					break;
				}
			}
		}
	private:
		Container _con;
	};
}