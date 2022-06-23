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
void ShrubberyCreationForm::execute(const Bureaucrat &executor){
	if (executor.getGrade() > 137){
		throw AForm::gradeTooLowException();
	}
	if (!this->getIsSigned()){
		throw AForm::notSignedFormException();
	}
	std::ofstream file(this->_target + "_shrubbery");
	file << "my-app/" << std::endl;
	file << "├─ README.md" << std::endl;
	file << "├─ node_modules/" << std::endl;
	file << "├─ public/" << std::endl;
	file << "│  ├─ favicon.ico" << std::endl;
	file << "│  ├─ index.html" << std::endl;
	file << "│  ├─ robots.txt" << std::endl;
	file << "├─ src/" << std::endl;
	file << "│  ├─ index.css" << std::endl;
	file << "│  ├─ index.js" << std::endl;
	file << "├─ .gitignore" << std::endl;
	file << "├─ package.json" << std::endl;
}