#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		virtual void	makeSound() const;
		Cat & operator=(Cat const & src);
	private:
		Brain *brain;
	protected:
};

#endif