#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Assignement operator called" << std::endl;
	this->type = src.type;
	return *this;
}
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal making sound" << std::endl;
}
const std::string & WrongAnimal::getType(void) const
{
	return this->type;
}
std::ostream & operator<<(std::ostream & o, WrongAnimal & a)
{
	o << a.getType();
	return o;
}