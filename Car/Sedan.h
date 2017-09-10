/*
 * Sedan.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef SEDAN_H_
#define SEDAN_H_
#include "Car.h"

class Sedan : public Car{
public:
	Sedan(std::string name_);
	void drive();
	virtual ~Sedan();
};

#endif /* SEDAN_H_ */
