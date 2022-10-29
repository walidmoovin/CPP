#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nameGiven) : _name(nameGiven), _hitPoints(100), _energyPoints(100), _attackDamages(30){
    std::cout << "ClapTrap Constructor called" << std::endl;
    return;
}
ClapTrap::ClapTrap() : _name("default"), _hitPoints(100), _energyPoints(100), _attackDamages(30){
    std::cout << "ClapTrap Constructor called" << std::endl;
    return;
}
ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
	return;
}
ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
    return;
}
void ClapTrap::attack(const std::string& target){
    if (getEnergyPoints() > 0){
        std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << this->getAttackDamages() << " points of damage" << std::endl;
        this->_energyPoints -= 1;
    }
    return;
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage" << std::endl;
    return;
}
void ClapTrap::beRepaired(unsigned int amount){
    if (getEnergyPoints() > 0)
    {
        std::cout << "ClapTrap " << getName() << " repairs himself, he gained " << amount << " hit points" << std::endl;
        this->_energyPoints -= 1;
        this->_hitPoints += amount;
    }
    return;
}
std::string ClapTrap::getName() const{
    return this->_name;
}
unsigned int ClapTrap::getHitPoints() const{
    return this->_hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const{
    return this->_energyPoints;
}
unsigned int ClapTrap::getAttackDamages() const{
    return this->_attackDamages;
}