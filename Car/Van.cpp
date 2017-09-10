/*
 * Van.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#include<iostream>
#include "Car.h"  //already included in Van.h
#include "Van.h"

Van::Van(std::string name_):Car(name_) {
	// TODO Auto-generated constructor stub
}

void Van::drive() {
	std::cout << "Driving "<< Van::name << std::endl;
}

Van::~Van() {
	// TODO Auto-generated destructor stub
	std::cout << "~Van()" << std::endl;
}

