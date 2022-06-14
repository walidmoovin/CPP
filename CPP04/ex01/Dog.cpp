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
Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}
Dog & Dog::operator=(Dog const & src){
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = src.type;
	Brain * BrandNewBrain = new Brain();
	*BrandNewBrain = *(src.brain);
	delete this->brain;
	this->brain = BrandNewBrain;
	return *this;
}
void	Dog::makeSound() const{
	std::cout << "Bouh ! beuh ! 'some crazy dog sounds...'" << std::endl;
	return;
}