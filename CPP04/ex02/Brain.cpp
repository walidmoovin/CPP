#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
	return;
}
Brain::Brain(Brain const & src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}
Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}
Brain & Brain::operator=(Brain const & src){
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = src.ideas[i];
	}
	return *this;
}