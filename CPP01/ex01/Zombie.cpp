#include "Zombie.hpp"

Zombie::Zombie(){
	return;
}

Zombie::~Zombie(){
	std::cout << this->name << " destroyed." << std::endl;
	return;
}
void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}