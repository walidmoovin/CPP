#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern created" << std::endl;
}
Intern::Intern(Intern const &src){
	std::cout << "Intern copied" << std::endl;
	*this = src;
}
Intern & Intern::operator=(Intern const &rhs){
	std::cout << "Intern assigned" << std::endl;
	(void)rhs;
	return *this;
}
Intern::~Intern(){
	std::cout << "Intern destroyed" << std::endl;
}
AForm * Intern::makeForm(const std::string &formName, const std::string &target){
	AForm *form;
	if (formName == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (formName == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else if (formName == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
		throw Intern::unknownFormException();
	std::cout << "Intern creates " << formName << std::endl;
	return form;
}
const char * Intern::unknownFormException::what() const throw(){
	return "Unknown form";
}