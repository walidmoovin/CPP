#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void announce(void);
		std::string name;
	private:
};

Zombie* zombieHorde(int N, std::string name);

#endif