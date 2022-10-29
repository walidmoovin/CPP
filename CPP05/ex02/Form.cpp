#include "Form.hpp"

AForm::AForm(){
	std::cout << "AForm constructor called" << std::endl;
}
AForm::AForm(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
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
	this->whoSigned = "";
}
AForm::AForm(const AForm &src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute), isSigned(src.isSigned){
	std::cout << "Form copy constructor called" << std::endl;
}
AForm & AForm::operator=(const AForm &rhs){
	std::cout << "Form assignment operator called" << std::endl;
	this->gradeToSign = rhs.gradeToSign;
	this->gradeToExecute = rhs.gradeToExecute;
	this->isSigned = rhs.isSigned;
	return *this;
}
AForm::~AForm(){
	std::cout << "Form destructor called" << std::endl;
}
void AForm::beSigned(const Bureaucrat &bureaucrat){
	std::cout << bureaucrat.getName() << " tries to sign " << this->name << std::endl;
	if (bureaucrat.getGrade() > this->gradeToSign)
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << this->name << " cause his grade is too low " << std::endl;
		throw AForm::gradeTooLowException();
	}
	else if (bureaucrat.getGrade() <= this->gradeToSign)
	{
		this->whoSigned = bureaucrat.getName();
		this->isSigned = true;
	}
}
void AForm::FormState(){
	if (!this->isSigned && !this->whoSigned.length())
		std::cout << "No bureaucrat tried to sign the form" << std::endl;
	else if (this->isSigned)
		std::cout << this->whoSigned << " signed " << this->name << std::endl;
}
bool AForm::getIsSigned(){
	return this->isSigned;
}
std::string AForm::getName(){
	return this->name;
}
const char* AForm::gradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* AForm::gradeTooLowException::what() const throw(){
	return "Grade is too low";
}
const char* AForm::notSignedFormException::what() const throw(){
	return "this form is not signed";
}