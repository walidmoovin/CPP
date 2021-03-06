#include "Form.hpp"

AForm::AForm(){
	std::cout << "AForm constructor called" << std::endl;
}
AForm::AForm(std::string const &name, unsigned int gradeToSign, unsigned int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
	std::cout << "Form constructor called" << std::endl;
	if (gradeToSign > 150)
		throw AForm::gradeTooLowException();
	if (gradeToSign < 1)
		throw AForm::gradeTooHighException();
	if (gradeToExecute > 150)
		throw AForm::gradeTooLowException();
	if (gradeToExecute < 1)
		throw AForm::gradeTooHighException();
	this->isSigned = false;
}
AForm::AForm(AForm const &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
	std::cout << "Form copy constructor called" << std::endl;
}
AForm::~AForm(){
	std::cout << "Form destructor called" << std::endl;
}
void AForm::beSigned(Bureaucrat &bureaucrat){
	this->whoSigned = bureaucrat.getName();
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw AForm::gradeTooLowException();
	this->isSigned = true;
}
void AForm::FormState(){
	if (this->isSigned)
		std::cout << this->whoSigned << " signed " << this->name << std::endl;
	else if (this->whoSigned.length())
		std::cout << this->whoSigned << " couldn't sign " << this->name << " cause his grade is too low " << std::endl;
	else
		std::cout << "No bureaucrat tried to sign the form" << std::endl;
}
const char* AForm::gradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* AForm::gradeTooLowException::what() const throw(){
	return "Grade is too low";
}