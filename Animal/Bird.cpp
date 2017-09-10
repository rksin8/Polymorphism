/*
 * Bird.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#include "Bird.h"


Bird::Bird(std::string name_):Animal(name_) {
}

void Bird::speak() {
	std::cout<< "caw-caw!\n";
}

Bird::~Bird() {
	// TODO Auto-generated destructor stub
}
