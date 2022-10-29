#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("Presidential Pardon Form", 25, 5), _target(target){
	std::cout << "Presidential Pardon Form Created" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target){
	std::cout << "Presidential Pardon Form copy constructor called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
	std::cout << "Presidential Pardon Form copy operator called" << std::endl;
	(void)src;
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential Pardon Form destructor called" << std::endl;
}
void PresidentialPardonForm::execute(const Bureaucrat &executor){
	if (executor.getGrade() > 5){
		throw AForm::gradeTooLowException();
	}
	if (!this->getIsSigned()){
		throw AForm::notSignedFormException();
	}
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}