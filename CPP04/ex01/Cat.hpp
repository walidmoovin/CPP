#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat();
		virtual void	makeSound() const;
	private:
		Brain *brain;
	protected:
};

#endif