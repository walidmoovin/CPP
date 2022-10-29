#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : name(name){
	if (grade > 150)
		throw Bureaucrat::gradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::gradeTooHighException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src){
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	(void)src;
	return *this;
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}
std::string Bureaucrat::getName() const{
	return this->name;
}	
unsigned int Bureaucrat::getGrade() const{
	return this->grade;
}
void Bureaucrat::incrementGrade(){
	if (this->grade <= 1)
			throw Bureaucrat::gradeTooHighException();
	this->grade--;
}
void Bureaucrat::decrementGrade(){
	if (this->grade >= 150)
		throw Bureaucrat::gradeTooLowException();
	this->grade++;
}
void Bureaucrat::executeForm(AForm &Form){
	if (Form.getIsSigned() == false)
		throw Bureaucrat::notSignedFormException();
	Form.execute(*this);
	std::cout << this->name << " executed " << Form.getName() << std::endl;
}
const char* Bureaucrat::gradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* Bureaucrat::gradeTooLowException::what() const throw(){
	return "Grade is too low";
}
const char* Bureaucrat::notSignedFormException::what() const throw(){
	return "this form is not signed";
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &src){
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}