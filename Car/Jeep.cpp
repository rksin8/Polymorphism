/*
 * Jeep.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */
#include<iostream>
#include "Jeep.h"
//#include "Car.h" // already included in Jeep.h

Jeep::Jeep(std::string name_):Car(name_) {
	// TODO Auto-generated constructor stub
}

void Jeep::drive() {
	std::cout << "Driving "<< Jeep::name << std::endl;
}

Jeep::~Jeep() {
	// TODO Auto-generated destructor stub
	std::cout << "~Jeep()" << std::endl;
}

