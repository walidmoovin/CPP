#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	public:
		Brain();
		Brain(Brain const & src);
		~Brain();
		std::string identify() const;
		Brain & operator=(Brain const & src);
	private:
		std::string	ideas[100];
	protected:
};

#endif