#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void){
	AAnimal *animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();
	for(int i = 0; i < 2; i++){
		delete animals[i];
	}
	system("leaks main");
	return 0;
}