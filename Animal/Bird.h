/*
 * Bird.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef BIRD_H_
#define BIRD_H_

#include "Animal.h"

class Bird : public Animal {
public:
	Bird(std::string name_);
	virtual void speak();
	virtual ~Bird();

//protected:
//	std::string name; //from Animal Class
};

#endif /* BIRD_H_ */
