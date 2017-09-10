/*
 * Cat.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#include "Cat.h"


Cat::Cat(std::string name_):Animal(name_) {
}

void Cat::speak() {
	std::cout<<"mew-mew\n";
}


Cat::~Cat() {
	// TODO Auto-generated destructor stub
}
