#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	return;
}
Dog::Dog(Dog const & src){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}
Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}
void	Dog::makeSound() const{
	std::cout << "Bouh ! beuh ! 'some crazy dog sounds...'" << std::endl;
	return;
}