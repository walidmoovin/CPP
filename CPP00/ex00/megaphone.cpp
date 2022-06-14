#include <iostream>
#include <cctype>

int main(int argc, char **argv){
	int i = 1;
	int y;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i]){
			y = 0;
			while (argv[i][y]){
				if (!isupper(argv[i][y]))
					argv[i][y] = toupper(argv[i][y]);
				std::cout << argv[i][y];
				y++;
			}
			i++;
		}
	}
}
