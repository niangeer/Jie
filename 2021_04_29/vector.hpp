#include <iostream>
#include <assert.h>
using namespace std;

namespace jzh
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		//Constructor
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}

		vector(int n, const T& data = T())
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
			resize(n, data);
		}

		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
			: _start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
			reserve(last - first);

			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}

		vector(const vector<T>& v)
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
			vector<T> tmp(v.begin(), v.end());
			swap(tmp);
		}

		vector<T>& operator=(const vector<T>& v)
		{
			if (&v != this)
			{
				vector<T> tmp(v);
				swap(tmp);
			}
			return *this;
		}

		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

		//Iterators
		iterator begin() { return _start; }
		iterator end() { return _finish; }
		const_iterator begin() const { return _start; }
		const_iterator end() const { return _finish; }

		//Capacity
		size_t size() const { return _finish - _start; }
		size_t capacity() const { return _endofstorage - _start; }
		bool empty() const { return _start == _finish; }
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				//增容可能导致 _finish 减 _start 发生变化
				size_t old_size = size();
				T* tmp = new T[n];
				memcpy(tmp, _start, sizeof(T)*size());

				delete[] _start;
				_start = tmp;
				_finish = tmp + old_size;
				_endofstorage = tmp + n;
			}
		}

		void resize(size_t n, const T& data)
		{
			if (n > size())
			{
				if (n > capacity())
					reserve(n);

				while (_finish != _start + n)
				{
					*_finish = data;
					_finish++;
				}
			}
			else
			{
				_finish = _start + n;
			}
		}
		void resize(size_t n) { resize(n, T()); }

		//Element access
		T& operator[](size_t pos)
		{
			assert(size() > pos);
			return _start[pos];
		}

		//Modifiers
		void push_back(const T& data)
		{
			check_capacity();
			*_finish = data;
			_finish++;
		}

		void pop_back()
		{
			assert(_finish > _start);
			_finish--;
		}

		iterator insert(iterator pos, const T& data)
		{
			assert(pos >= _start && pos <= _finish);

			//增容可能导致pos变为野指针
			size_t posi = pos - _start;
			check_capacity();
			pos = _start + posi;

			iterator it = _finish;
			while (it != pos)
			{
				*it = *(it - 1);
				it--;
			}
			*pos = data;
			_finish++;

			return pos;
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);

			iterator it = pos;
			while (it != _finish - 1)
			{
				*(it) = *(it + 1);
				it++;
			}
			_finish--;

			return pos;
		}

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage, v._endofstorage);
		}

		void check_capacity()
		{
			if (_finish == _endofstorage)
			{
				if (capacity() == 0)
					reserve(4);
				else
					reserve(capacity() * 2);
			}
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
}