#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal & operator=(WrongAnimal const & src);
		~WrongAnimal();
		void makeSound() const;
		const std::string & getType(void) const;
	protected :
		std::string type;
};

std::ostream & operator<<(std::ostream & o, WrongAnimal & a);

#endif