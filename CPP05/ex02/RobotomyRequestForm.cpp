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