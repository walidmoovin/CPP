#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal{
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();
		virtual void	makeSound() const;
		std::string getType() const;
		AAnimal & operator=(AAnimal const & src);
	private:
	protected:
		std::string type;
};

#endif