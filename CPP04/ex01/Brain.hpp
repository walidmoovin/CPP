#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public : 
		Brain();
		Brain(Brain const & src);
		Brain& operator=(Brain const & src);
		~Brain();
		std::string * GetIdeas();
	private:
		std::string _ideas[100];
};

#endif