#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrats("Bob", 6);
		std::cout << bureaucrats.getName() << std::endl;
		std::cout << bureaucrats.getGrade() << std::endl;
		bureaucrats.incrementGrade();
		std::cout << bureaucrats.getGrade() << std::endl;
		bureaucrats.decrementGrade();
		std::cout << bureaucrats.getGrade() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
	return 0;
}