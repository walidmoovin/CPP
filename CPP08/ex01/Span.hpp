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
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
			if (end - begin > _n)
				throw std::exception();
			_v.insert(_v.end(), begin, end);
			_n -= end - begin;		
		}
		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		unsigned int _n;
		unsigned int _size;
		std::vector<int> _v;
};

#endif