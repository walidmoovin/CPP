#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_name = "default";
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}
FragTrap::FragTrap(std::string nameGiven){
	this->_name = nameGiven;
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}
FragTrap::FragTrap(FragTrap const & src){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return;
}
FragTrap & FragTrap::operator=(FragTrap const & rhs){
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}
FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}
void	FragTrap::highFivesGuys(){
	std::cout << "gimme a Highfive !" << std::endl;
	return;
}