#include "Form.hpp"

Form::Form(){
	std::cout << "Form constructor called" << std::endl;
}
Form::Form(std::string const &name, unsigned int gradeToSign, unsigned int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
	std::cout << "Form constructor called" << std::endl;
	if (gradeToSign > 150)
		throw Form::gradeTooLowException();
	if (gradeToSign < 1)
		throw Form::gradeTooHighException();
	if (gradeToExecute > 150)
		throw Form::gradeTooLowException();
	if (gradeToExecute < 1)
		throw Form::gradeTooHighException();
	this->isSigned = false;
	whoSigned = "";
}
Form::Form(Form const &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
	std::cout << "Form copy constructor called" << std::endl;
}
Form & Form::operator=(Form const& rhs){
	std::cout << "Form assignment operator called" << std::endl;
	this->isSigned = rhs.isSigned;
	this->whoSigned = rhs.whoSigned;
	return *this;
}
Form::~Form(){
	std::cout << "Form destructor called" << std::endl;
}
void Form::beSigned(Bureaucrat &bureaucrat){
	std::cout << bureaucrat.getName() << " tries to sign " << this->name << std::endl;
	if (bureaucrat.getGrade() > this->gradeToSign)
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << this->name << " cause his grade is too low " << std::endl;
		throw Form::gradeTooLowException();
	}
	else if (bureaucrat.getGrade() <= this->gradeToSign)
	{
		this->whoSigned = bureaucrat.getName();
		this->isSigned = true;
	}
}
void Form::FormState(){
	if (!this->isSigned && !this->whoSigned.length())
		std::cout << "No bureaucrat tried to sign the form" << std::endl;
	else if (this->isSigned)
		std::cout << this->whoSigned << " signed " << this->name << std::endl;
}
const char* Form::gradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* Form::gradeTooLowException::what() const throw(){
	return "Grade is too low";
}