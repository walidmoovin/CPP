#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &rhs);
		~Intern();
		AForm *makeForm(const std::string &formName, const std::string &target);
		class unknownFormException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
	private:
	protected:
};

#endif