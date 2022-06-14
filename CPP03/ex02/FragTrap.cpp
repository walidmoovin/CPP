#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}
FragTrap::FragTrap(std::string nameGiven){
	this->_name = nameGiven;
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}
FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}
void	FragTrap::highFivesGuys(){
	std::cout << "gimme a Highfive !" << std::endl;
	return;
}