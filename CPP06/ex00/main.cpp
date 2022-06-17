int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	char charConversion;
	int intConversion;
	float floatConversion;
	double doubleConversion;
	std::cout << "char : " << charConversion << std::endl;
	std::cout << "int : " << intConversion << std::endl;
	std::cout << "float : " << floatConversion << std::endl;
	std::cout << "double : " << doubleConversion << std::endl;
	return 0;
}