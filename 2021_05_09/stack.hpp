#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

namespace jzh
{
	template<class T, class Container = deque<T>>
	class stack
	{
	public:
		bool empty() const { return _con.empty(); }
		size_t size() const { return _con.size(); }
		T& top() { return _con.back(); }
		const T& top() const { return _con.back(); }
		void push(const T& data) { _con.push_back(data); }
		void pop() { _con.pop_back(); }
	private:
		Container _con;  //  ≈‰∆˜
	};
}