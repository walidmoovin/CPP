#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : name(name){
	if (grade > 150)
		throw Bureaucrat::gradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::gradeTooHighException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}
Bureaucrat & Bureaucrat::operator=(Bureaucrat const &src){
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	this->grade = src.grade;
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
const char* Bureaucrat::gradeTooHighException::what() const throw(){
	return "Grade is too high";
}
const char* Bureaucrat::gradeTooLowException::what() const throw(){
	return "Grade is too low";
}
std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}