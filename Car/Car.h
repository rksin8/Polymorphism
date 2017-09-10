/*
 * Car.h
 *
 *  Created on: 09-Sep-2017
 *      Author: ranjeet
 */

#ifndef CAR_H_
#define CAR_H_
#include<iostream>

#include<string>

class Car{
public:
	Car(std::string name_):name(name_){}  //Constructor is need in abstract class too
	virtual void drive()=0;
	virtual ~Car(){};  // virtual ~Car(); will not work unless derived class defined this so use {};

protected:
	std::string name;

};

#endif /* CAR_H_ */
