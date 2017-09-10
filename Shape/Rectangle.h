/*
 * Rectangle.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(double l_, double b_);
	double CalculateArea();
	double CalculatePerimeter();
	void Print();
	void SetColor(std::string color_);
	virtual ~Rectangle();

protected:
	double l , b; //length, width
};

#endif /* RECTANGLE_H_ */
