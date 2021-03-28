#include "string.h"

const size_t jzh::string::npos = -1;

//Iterator
jzh::string::iterator jzh::string::begin()
{
	return _str;
}

jzh::string::iterator jzh::string::end()
{
	return _str + _size;
}

jzh::string::const_iterator jzh::string::begin()const
{
	return _str;
}
jzh::string::const_iterator jzh::string::end()const
{
	return _str + _size;
}

//容量(capacity)
size_t jzh::string::size()const
{
	return _size;
}

size_t jzh::string::capacity()const
{
	return _capacity;
}

void jzh::string::resize(size_t n,char ch)
{
	if (n < _size)
	{
		_size = n;
		_str[n] = '\0';
	}
	else
	{
		if (n > _capacity)
		{
			reserve(n);
		}
		for (size_t i = _size; i < n; i++)
		{
			_str[i] = ch;
		}
		_size = n;
		_str[n] = '\0';
	}
}

void jzh::string::reserve(size_t n)
{
	if (n > _capacity)
	{
		char* tmp = new char[n + 1];
		strcpy(tmp, _str);

		delete[] _str;
		_str = tmp;
		_capacity = n;
	}
}

void jzh::string::clear()
{
	_size = 0;
	_str[0] = '\0';
}

bool jzh::string::empty()const
{
	return 0 == _size;
}

//元素访问(element access)
char& jzh::string::operator[](size_t pos)
{
	assert(pos < _size);

	return _str[pos];
}
const char& jzh::string::operator[](size_t pos)const
{
	assert(pos < _size);

	return _str[pos];
}

//修改操作(modify)
void jzh::string::push_back(char ch)
{
	//if (_size == _capacity)
	//{
	//	reserve(2 * _capacity);
	//}
	//_str[_size++] = ch;
	//_str[_size] = '\0';

	insert(_size, ch);
}

void jzh::string::append(const char* s)
{
	//size_t len = strlen(s);
	//if (len + _size > _capacity)
	//{
	//	reserve(len + _size);
	//}
	//strcpy(_str + _size, s);
	//_size += len;
	insert(_size, s);
}

jzh::string& jzh::string::insert(size_t pos, char ch)
{
	assert(pos <= _size);

	if (_size == _capacity)
	{
		reserve(_capacity * 2);
	}
	size_t end = _size + 1;
	while (end > pos)
	{
		_str[end] = _str[end - 1];
		end--;
	}
	_str[pos] = ch;
	_size++;

	return *this;
}

jzh::string& jzh::string::insert(size_t pos, const char* s)
{
	assert(pos <= _size);

	size_t len = strlen(s);
	if (len + _size > _capacity)
	{
		reserve(len + _size);
	}
	size_t end = _size + len;
	while (end >= pos + len)
	{
		_str[end] = _str[end - len];
		end--;
	}
	strncpy(_str + pos, s, len);
	_size += len;

	return *this;
}

jzh::string& jzh::string::operator+=(char ch)
{
	push_back(ch);
	return *this;
}
jzh::string& jzh::string::operator+=(const char* s)
{
	append(s);
	return *this;
}
jzh::string& jzh::string::operator+=(const string& str)
{
	append(str._str);
	return *this;
}

jzh::string& jzh::string::erase(size_t pos, size_t len)
{
	assert(pos < _size);

	if (len == npos || pos + len >= _size)
	{
		_str[pos] = '\0';
		_size = pos;
	}
	else
	{
		strcpy(_str + pos, _str + pos + len);
		_size -= len;
	}

	return *this;
}

void jzh::string::swap(string& str)
{
	std::swap(_str, str._str);
	std::swap(_size, str._size);
	std::swap(_capacity, str._capacity);
}