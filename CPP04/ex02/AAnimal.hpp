#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal{
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		AAnimal & operator=(AAnimal const & rhs);
		virtual ~AAnimal();
		virtual void	makeSound() const = 0;
		std::string getType() const;
	private:
	protected:
		std::string type;
};

std::ostream & operator<<(std::ostream & o, AAnimal & a);

#endif