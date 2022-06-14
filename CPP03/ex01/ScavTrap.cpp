#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nameGiven){
	this->_name = nameGiven;
    std::cout << "ScavTrap Constructor called" << std::endl;
    return;
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