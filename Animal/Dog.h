/*
 * Dog.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef DOG_H_
#define DOG_H_

#include "Animal.h"

class Dog : public Animal {
public:
	Dog(std::string name_);
	virtual void speak();
	virtual ~Dog();

//protected:
//	std::string name; //from Animal Class
};

#endif /* DOG_H_ */
