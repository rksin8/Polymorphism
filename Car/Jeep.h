/*
 * Jeep.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef JEEP_H_
#define JEEP_H_

#include "Car.h"

class Jeep : public Car {
public:
	Jeep(std::string name_);
	void drive();
	virtual ~Jeep();
};

#endif /* JEEP_H_ */
