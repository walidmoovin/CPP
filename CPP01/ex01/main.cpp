#include "Zombie.hpp"

int main(){
	Zombie *zombiehorde = zombieHorde(50, "zombax");
	for (int i = 0; i < 50; i++){
		std::cout << i << " ";
		zombiehorde[i].announce();
	}
	delete [] zombiehorde;
	return 0;
}