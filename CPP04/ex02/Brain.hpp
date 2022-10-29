#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	public:
		Brain();
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		~Brain();
		std::string * GetIdeas();
	private:
		std::string	_ideas[100];
	protected:
};

#endif