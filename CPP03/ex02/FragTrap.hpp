#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string nameGiven);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif