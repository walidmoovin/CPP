#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){
	std::cout << "Shrubbery Creation Form Created" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target){
	std::cout << "Shrubbery copy constructor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
	std::cout << "Shrubbery copy operator called" << std::endl;
	(void)src;
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shrubbery destructor called" << std::endl;
}