/*
 * Van.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef VAN_H_
#define VAN_H_

#include "Car.h"

class Van : public Car{
public:
	Van(std::string name_);
	void drive();
	virtual ~Van();
};

#endif /* VAN_H_ */
