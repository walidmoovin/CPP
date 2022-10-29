#include "Array.hpp"

int main(void)
{
	Array<int> a(5);
	a.tab[0] = 7;
	try
	{
		std::cout << "a[0] : " << a[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}