#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
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