#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _size(n) 
{
	if (n <= 0)
		throw std::exception();
	std::cout << "Span constructor called" << std::endl;
}
Span::Span(const Span & src) : _n(src._n)
{
	*this = src;
}
Span & Span::operator=(const Span & src)
{
	if (this != &src)
	{
		_n = src._n;
	}
	return (*this);
}
Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
void Span::addNumber(int n)
{
	if (_n == 0)
		throw std::exception();
	_n--;
	_v.push_back(n);
}
unsigned int Span::shortestSpan()
{
	if (_size == 0 || _size == 1)
		throw std::exception();
	std::sort(_v.begin(), _v.end());
	unsigned int i = 0;
	unsigned int j = 1;
	int min = _v[j] - _v[i];
	while (i < _v.size() - 2)
	{
		if (_v[j] - _v[i] < min)
			min = _v[j] - _v[i];
		i++;
		j++;
	}
	return (min);
}
unsigned int Span::longestSpan()
{
	if (_size == 0 || _size == 1)
		throw std::exception();
	std::sort(_v.begin(), _v.end());
	return (_v[_v.size() - 1] - _v[0]);
}
