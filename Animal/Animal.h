/*
 * Animal.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<iostream>


class Animal {
public:
	Animal(std::string name_):name(name_){};
	virtual void speak()=0;
	virtual ~Animal(){};

protected:
	std::string name;
};

#endif /* ANIMAL_H_ */
