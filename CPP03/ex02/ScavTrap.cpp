#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->_name = "default";
	std::cout << "ScavTrap default constructor called" << std::endl;
	return;
}
ScavTrap::ScavTrap(std::string nameGiven){
	this->_name = nameGiven;
    std::cout << "ScavTrap Constructor called" << std::endl;
    return;
}
ScavTrap::ScavTrap(ScavTrap const & src){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return;
}
ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
    return;
}
void	ScavTrap::attack(const std::string& target){
	if (getEnergyPoints() > 0){
        std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << this->getAttackDamages() << " points of damage" << std::endl;
        this->_energyPoints -= 1;
    }
}
void    ScavTrap::guardGate(){
    std::cout << "Scavtrap entered gatekeeper mode" << std::endl;
    return;
}