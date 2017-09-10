/*
 * SUV.h
 *
 *  Created on: 09-Sep-2017
 *      Author: ranjeet
 */

#ifndef SUV_H_
#define SUV_H_

#include "Car.h"

class SUV : public Car
{
public:
	SUV(std::string name_);
	void drive();
	 ~SUV();
};

#endif /* SUV_H_ */
