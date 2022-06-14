#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon(std::string weapontype);
		~Weapon();
		std::string const & getType();
		std::string newWeapon;
		void setType(std::string newWeapon);
	private:
		std::string type;
};
#endif