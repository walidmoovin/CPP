#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
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