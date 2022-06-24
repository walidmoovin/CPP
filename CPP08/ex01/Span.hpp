#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	public:
		Span(unsigned int n);
		Span(const Span & src);
		Span & operator=(const Span & src);
		~Span();
		void addNumber(int n);
		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		Span();
		unsigned int _n;
		unsigned int _size;
		std::vector<int> _v;
};

#endif