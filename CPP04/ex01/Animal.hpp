#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string getType() const;
	private:
	protected:
		std::string type;
};

std::ostream & operator<<(std::ostream & o, Animal & a);

#endif