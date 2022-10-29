#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
	return;
}
Animal::Animal(Animal const & src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}
Animal & Animal::operator=(Animal const & rhs){
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}
Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}
std::string Animal::getType() const{
	return this->type;
}
void	Animal::makeSound() const{
	std::cout << "no animal saj" << std::endl;
	return;
}
std::ostream & operator<<(std::ostream & o, Animal const & rhs){
	o << rhs.getType();
	return o;
}