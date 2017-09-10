/*
 * Cat.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef CAT_H_
#define CAT_H_


#include "Animal.h"

class Cat : public Animal{
public:
	Cat(std::string name_);
	virtual void speak();
	virtual ~Cat();

//protected:
//	std::string name; //from Animal Class
};

#endif /* CAT_H_ */
