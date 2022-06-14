#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public AAnimal{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();
		virtual void	makeSound() const;
	private:
	protected:
};

#endif