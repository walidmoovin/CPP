#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog();
		virtual void	makeSound() const;
	private:
		Brain *brain;
	protected:
};

#endif