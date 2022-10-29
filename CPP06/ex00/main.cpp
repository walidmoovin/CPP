#include <iostream>
#include <cmath>


void	print_char(double converted)
{
	std::cout << "char : "; 
	int a = static_cast<int>(converted);
	if (!std::isprint(a))
		std::cout << "Non displayable" << std::endl;
	else if (a > 127 || a < 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'" << (char)a << "'" << std::endl;
}

void	print_int(double converted)
{
	std::cout << "int : "; 
	int a = static_cast<int>(converted);
	if (std::isinf(converted) || std::isnan(converted))
		std::cout << "impossible" << std::endl;
	else
		std::cout << a << std::endl;
}

void	print_float(double converted)
{
	std::cout << "float : "; 
	float a = static_cast<float>(converted);
	std::cout << a;
	if (static_cast<int>(converted) == converted)
		std::cout << ".0f" << std::endl;
	else
		std::cout << 'f' << std::endl;
}

void	print_double(double converted)
{
	std::cout << "double : "; 
	double a = static_cast<double>(converted);
	std::cout << a;
	if (static_cast<int>(converted) == converted)
		std::cout << ".0" << std::endl;
}

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	double	converted;
	size_t	index = 0;
	try
	{
		converted = std::stod(argv[1], &index);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Wrong argument" << std::endl;
		return 0;
	}
	std::string arg1 = argv[1];
	if (index != arg1.length() && arg1[arg1.length() - 1] != 'f')
	{
		std::cerr << "Wrong argument 2" << std::endl;
		return 0;
	}
	print_char(converted);
	print_int(converted);
	print_float(converted);
	print_double(converted);
	return 0;
}