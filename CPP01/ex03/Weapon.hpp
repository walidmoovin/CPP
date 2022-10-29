#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon(std::string weapontype);
		~Weapon();
		std::string const & getType();
		void setType(std::string newWeapon);
	private:
		std::string _newWeapon;
		std::string _type;
};
#endif