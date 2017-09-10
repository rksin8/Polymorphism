/*
 * Main.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */



#include "Animal.h"
#include "Bird.h"
#include "Cat.h"
#include "Dog.h"


int main(int argc, char **argv) {

	Animal *animal = new Bird("Crows");
	animal->speak();

	animal = new Cat("Cat");
	animal->speak();

	animal= new Dog("Dog");
	animal->speak();

	delete animal;


	return 0;
}

