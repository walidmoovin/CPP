#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    public:
		ClapTrap();
        ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamages() const;
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamages;
};

#endif