#include "Weapon.hpp"

Weapon::Weapon(std::string weapontype) : newWeapon(weapontype){
	this->setType(newWeapon);
	return;
}

Weapon::~Weapon(){
	return;
}

std::string const & Weapon::getType(){
	return this->type;
}

void Weapon::setType(std::string newWeapon){
	this->type = newWeapon;
	return;
}