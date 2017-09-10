/*
 * Dog.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#include "Dog.h"



Dog::Dog(std::string name_):Animal(name_) {
}

void Dog::speak() {
	std::cout<< "bark-bark!\n";
}

Dog::~Dog() {
	// TODO Auto-generated destructor stub
}
