#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bob("Bob", 4);
		std::cout << "name : " << Bob.getName() << std::endl;
		Bob.incrementGrade();
		std::cout << "grade : " << Bob.getGrade() << std::endl;
		AForm Form1("Form#1", 4, 20);
		Form1.FormState();
		Form1.beSigned(Bob);
		Form1.FormState();
		AForm Form2("Form#2", 4, 1);
		Form2.FormState();
		// Bureaucrat Michael("Mich Mich", 169);
		// Bureaucrat Michael("Mich Mich", 0);
		// Form Form3("Form3", 0, 1);
		// Form Form3("Form3", 170, 1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
	return 0;
}