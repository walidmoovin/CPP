#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bob("Bob", 5);
		std::cout << "name : " << Bob.getName() << std::endl;
		std::cout << "grade : " << Bob.getGrade() << std::endl;
		Bob.incrementGrade();
		std::cout << "new grade : " << Bob.getGrade() << std::endl;
		ShrubberyCreationForm form2("Bob");
		std::cout << "is the form signed ? " << form2.getIsSigned() << std::endl;
		form2.beSigned(Bob);
		std::cout << "asking for signature : is the form signed ? " << form2.getIsSigned() << std::endl;
		Bob.executeForm(form2);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
	return 0;
}