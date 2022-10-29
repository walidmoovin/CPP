#include "Span.hpp"

int main(void){
	try
	{
		Span sp = Span(5);
		std::vector<int> v;
		v.push_back(5);
		v.push_back(3);
		v.push_back(17);
		v.push_back(9);
		v.push_back(11);
		sp.addNumber(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// Span sp = Span(10050);
	// for (int i = 0; i < 10000; i++)
	// 	sp.addNumber(i);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return (0);
}