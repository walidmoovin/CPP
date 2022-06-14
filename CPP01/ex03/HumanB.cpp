#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
	return;
}

HumanB::~HumanB(){
	return;
}

void HumanB::attack(){
	std::cout << this->name << " attack with their " << this->WeaponHumanB->getType() << std::endl;
	return;
}

void HumanB::setWeapon(Weapon & giveMeWeapon){
	this->WeaponHumanB = &giveMeWeapon;
}