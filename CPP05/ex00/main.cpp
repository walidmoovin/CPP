#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrats("Bob", 6);
		std::cout << bureaucrats;
		bureaucrats.incrementGrade();
		std::cout << bureaucrats;
		bureaucrats.decrementGrade();
		std::cout << bureaucrats;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
	return 0;
}