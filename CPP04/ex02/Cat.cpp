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
Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}
Cat & Cat::operator=(Cat const & src){
	std::cout << "Cat copy assignment operator called" << std::endl;\
	this->type = src.type;
	Brain * BrandNewBrain = new Brain();
	*BrandNewBrain = *(src.brain);
	delete this->brain;
	this->brain = BrandNewBrain;
	return *this;
}
void	Cat::makeSound() const{
	std::cout << "meow !" << std::endl;
	return;
}