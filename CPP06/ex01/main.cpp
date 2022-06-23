#include <iostream>

struct Data
{
	int x;
	int y;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

std::ostream & operator<<(std::ostream & os, Data ptr)
{
	os << ptr.x << " " << ptr.y;
	return os;
}

int main(void)
{
	Data d = {42, 21};

	std::cout << "adress of struct data : " << &d << std::endl;
	std::cout << "before serializing :  " << d << std::endl;

	uintptr_t serialized = serialize(&d);
	Data *deserialized = deserialize(serialized);
	
	std::cout << "adress after serializing and deserializing : " << deserialized << std::endl;
	std::cout << "after serializing and deserializing : " << *deserialized << std::endl;
	return 0;
}