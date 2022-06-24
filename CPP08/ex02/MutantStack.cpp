#include "MutantStack.hpp"

MutantStack::MutantStack()
{
	std::cout << "MutantStack constructor called" << std::endl;
}
MutantStack::MutantStack(const MutantStack &src)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	*this = src;
}
MutantStack &MutantStack::operator=(const MutantStack &rhs)
{
	std::cout << "MutantStack assignment operator called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return *this;
}
MutantStack::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}
void MutantStack::push(const T &elem)
{
	std::stack<T>::push(elem);
}

