#include "AAnimal.hpp"
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
	// try to instanciate an AAnimal with : AAnimal *animal = new AAnimal();
	// it will not work because AAnimal is abstract
	return 0;
}