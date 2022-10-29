#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bob("Bob", 5);
		std::cout << "name : " << Bob.getName() << std::endl;
		std::cout << "grade : " << Bob.getGrade() << std::endl;
		Bob.incrementGrade();
		std::cout << "new grade : " << Bob.getGrade() << std::endl;
		Intern interne;
		AForm *form = interne.makeForm("shrubbery creation", "Bob");
		form->beSigned(Bob);
		form->FormState();
		form->execute(Bob);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
	return 0;
}