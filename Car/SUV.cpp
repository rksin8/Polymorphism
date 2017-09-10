/*
 * SUV.cpp
 *
 *  Created on: 09-Sep-2017
 *      Author: ranjeet
 */
#include<iostream>
#include "SUV.h"
#include "Car.h"

SUV::SUV(std::string name_):Car(name_){
	//Car::name =name_;
}

void SUV::drive() {
	std::cout << "Driving "<< SUV::name << std::endl;
}

SUV::~SUV() {
	// TODO Auto-generated destructor stub
	std::cout << "~SUV()" << std::endl;
}

