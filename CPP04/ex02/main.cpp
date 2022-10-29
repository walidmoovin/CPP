#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void){
	// const AAnimal* meta = new AAnimal(); doesn't work because AAnimal is abstract
	AAnimal *animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();
	for(int i = 0; i < 2; i++){
		animals[i]->makeSound();
	}
	for(int i = 0; i < 2; i++){
		delete animals[i];
	}
	return 0;
}