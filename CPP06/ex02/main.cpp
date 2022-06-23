#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int nb = rand() % 3;
	if (nb == 0)
		return (new A);
	else if (nb == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
		}
		catch(const std::exception& e)
		{
			std::cout << "C" << std::endl;
		}
		
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			A &a = dynamic_cast<A &>(p);
			(void)a;
		}
		catch(const std::exception& e)
		{
			std::cout << "B" << std::endl;
		}
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			C &c = dynamic_cast<C &>(p);
			(void)c;
		}
		catch(const std::exception& e)
		{
			std::cout << "A" << std::endl;
		}
	}
}

int main(void)
{
	srand(time(NULL));
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}