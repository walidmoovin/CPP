#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();
		virtual void	makeSound() const;
		Dog & operator=(Dog const & src);
	private:
		Brain *brain;
	protected:
};

#endif