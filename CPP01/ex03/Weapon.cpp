#include "Weapon.hpp"

Weapon::Weapon(std::string weapontype) : _newWeapon(weapontype){
	this->setType(_newWeapon);
	return;
}

Weapon::~Weapon(){
	return;
}

std::string const & Weapon::getType(){
	return this->_type;
}

void Weapon::setType(std::string newWeapon){
	this->_type = newWeapon;
	return;
}