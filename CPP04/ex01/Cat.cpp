#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
	return;
}
Cat::Cat(Cat const & src){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}
Cat & Cat::operator=(Cat const & rhs){
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
		delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return *this;
}
Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}
void	Cat::makeSound() const{
	std::cout << "meow !" << std::endl;
	return;
}