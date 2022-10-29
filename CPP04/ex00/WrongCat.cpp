#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	this->type = "WrongCat";
}
WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = src;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}
WrongCat & WrongCat::operator=(WrongCat const & src)
{
	std::cout << "WrongCat Assignement operator called" << std::endl;
	this->type = src.type;
	return *this;
}
void WrongCat::makeSound() const
{
	std::cout << " Cat Meow" << std::endl;
}