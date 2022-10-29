#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : name(name), WeaponHumanA(weapon){
	return;
}

HumanA::~HumanA(){
	return;
}

void HumanA::attack(){
	std::cout << this->name << " attack with their " << this->WeaponHumanA.getType() << std::endl;
	return;
}