#include <iostream>
#include <list>
#include <deque>
using namespace std;

namespace jzh
{
	template<class T, class Container = deque<T>>
	class queue
	{
	public:
		bool empty() const { return _con.empty(); }
		size_t size() const { return _con.size();  }
		T& front() { return _con.front(); }
		const T& front() const { return _con.front(); }
		T& back() { return _con.back(); }
		const T& back() const { return _con.back(); }
		void push(const T& data) { _con.push_back(data); }
		void pop() { _con.pop_front(); }
	private:
		Container _con;
	};
}