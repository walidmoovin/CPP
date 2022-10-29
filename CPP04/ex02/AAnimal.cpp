#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "Animal constructor called" << std::endl;
	return;
}
AAnimal::AAnimal(AAnimal const & src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}
AAnimal & AAnimal::operator=(AAnimal const & rhs){
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
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
std::ostream & operator<<(std::ostream & o, AAnimal const & rhs){
	o << rhs.getType();
	return o;
}