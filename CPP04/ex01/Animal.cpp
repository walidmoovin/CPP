#include "Animal.hpp"

AAnimal::AAnimal(){
	std::cout << "Animal constructor called" << std::endl;
	return;
}
AAnimal::AAnimal(AAnimal const & src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}
AAnimal & AAnimal::operator=(AAnimal const & src){
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}
AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}
std::string AAnimal::getType() const{
	return this->type;
}
void	AAnimal::makeSound() const{
	std::cout << "no animal saj" << std::endl;
	return;
}