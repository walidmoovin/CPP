#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
	return;
}
Brain::Brain(Brain const & src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}
Brain & Brain::operator=(Brain const & rhs){
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs){
		for (int i = 0; i < 100; i++){
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}
Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}
std::string * Brain::GetIdeas()
{
	return this->_ideas;
}