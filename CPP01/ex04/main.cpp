#include <iostream>
#include <fstream>
#include <string>


void replacewords(std::ifstream & ifs, std::string file, std::string s1, std::string s2)
{
	std::ofstream ofs(file + ".replace");
	std::string line;
	
	while(std::getline(ifs,line))
	{	
		size_t pos = 0; 
		while(pos != std::string::npos)
		{
			pos = line.find(s1);
			if(pos != std::string::npos)
			{
				line.erase(pos,s1.length());
				line.insert(pos,s2);
			}
		}
		if (!ifs.eof())
			line.push_back('\n');
		ofs << line;
	}
	ifs.close();
	ofs.close();
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return 0;
	}
	if (!argv[2] || !argv[3])
	{
		std::cout << "s1 or s2 cannot be empty";
		return 1;
	}
	std::string file,s1,s2;
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream ifs;
	ifs.open(file);
	if (ifs.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "File is empty" << std::endl;
		return 1;
	}
	if(!ifs.good() || !ifs.is_open())
	{
		std::cout << "Error: File cannot be opened" << std::endl;
		return 1;
	}
	replacewords(ifs, file, s1,s2);
	return 0;
}