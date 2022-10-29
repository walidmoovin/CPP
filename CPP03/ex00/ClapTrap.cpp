#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamages(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string nameGiven) : _name(nameGiven), _hitPoints(10), _energyPoints(10), _attackDamages(0){
    std::cout << "Constructor called" << std::endl;
    return;
}
ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}
ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamages = rhs._attackDamages;
	return *this;
}
ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
    return;
}
void ClapTrap::attack(const std::string& target){
    if (getEnergyPoints() > 0){
        std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << this->getAttackDamages() << " points of damage" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "Failed casting" << std::endl;
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