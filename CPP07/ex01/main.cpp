#include "iter.hpp"

void	minus_one(int &i)
{
	i--;
}

int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int i = 0;
	while (i < 5)
		std::cout << tab[i++] << std::endl;
	iter(tab, 5, &minus_one);
	i = 0;
	while (i < 5)
		std::cout << tab[i++] << std::endl;
	return (0);
}