#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public AAnimal{
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		virtual void	makeSound() const;
	private:
	protected:
};

#endif