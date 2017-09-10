/*
 * Sedan.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */
#include<iostream>
#include "Sedan.h"
#include "Car.h"

Sedan::Sedan(std::string name_):Car(name_) {
}

void Sedan::drive() {
	std::cout << "Driving "<< Sedan::name << std::endl;
}

Sedan::~Sedan() {
	// TODO Auto-generated destructor stub
	std::cout << "~Sedan()" << std::endl;
}

