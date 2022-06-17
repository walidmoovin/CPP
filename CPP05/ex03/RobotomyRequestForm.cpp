#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target){
	std::cout << "Robotomy Request Form Created" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target){
	std::cout << "Robotomy Request Form copy constructor called" << std::endl;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
	std::cout << "Robotomy Request Form copy assignment operator called" << std::endl;
	(void)src;
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Robotomy Request Form destructor called" << std::endl;
}
void RobotomyRequestForm::execute(const Bureaucrat &executor){
	if (executor.getGrade() > 45){
		throw AForm::gradeTooLowException();
	}
	if (!this->getIsSigned()){
		throw AForm::notSignedFormException();
	}
	int i = rand() % 2 + 1;
	if (i == 1){
		std::cout << "VVVVVVVVVVVVVVVV!!!!" << std::endl;
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
		std::cout << "failed robotomizing" << std::endl;
}