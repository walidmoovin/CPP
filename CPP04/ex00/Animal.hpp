#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal{
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		~AAnimal();
		virtual void	makeSound() const;
		std::string getType() const;
	private:
	protected:
		std::string type;
};

#endif