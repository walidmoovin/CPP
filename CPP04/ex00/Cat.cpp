#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	return;
}
Cat::Cat(Cat const & src){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}
Cat & Cat::operator=(Cat const & rhs){
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}
Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}
void	Cat::makeSound() const{
	std::cout << "no sound, it's a cat you dumb !" << std::endl;
	return;
}