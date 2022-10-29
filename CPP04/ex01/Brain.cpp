#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Brain Constructor called" << std::endl;
}
Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (size_t i = 0; i < 2; i++)
		this->_ideas[i] = src._ideas[i];
}
Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
Brain& Brain::operator=(Brain const & src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	
	return *this;
}
std::string * Brain::GetIdeas()
{
	return this->_ideas;
}