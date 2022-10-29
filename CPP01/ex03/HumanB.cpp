#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
	return;
}

HumanB::~HumanB(){
	return;
}

void HumanB::attack(){
	if (this->WeaponHumanB)
		std::cout << this->name << " attacks with his " << this->WeaponHumanB->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon." << std::endl;
	return;
}

void HumanB::setWeapon(Weapon & giveMeWeapon){
	this->WeaponHumanB = &giveMeWeapon;
}