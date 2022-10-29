#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	return;
}
Dog::Dog(Dog const & src){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}
Dog & Dog::operator=(Dog const & rhs){
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
		delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return *this;
}
Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}
void	Dog::makeSound() const{
	std::cout << "Bouh ! beuh ! 'some crazy dog sounds...'" << std::endl;
	return;
}