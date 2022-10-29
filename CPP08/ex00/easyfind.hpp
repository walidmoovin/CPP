#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T>
int easyfind(T &container, int value)
{
	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		if (*it == value)
			return *it;
		it++;
	}
	throw std::exception();
}

#endif