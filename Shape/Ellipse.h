/*
 * Ellipse.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include "Shape.h"

class Ellipse : public Shape{
public:
	Ellipse(double a_, double b_);
	double CalculateArea();
	double CalculatePerimeter();
	void Print();
	void SetColor(std::string color_);
	virtual ~Ellipse();

protected:
	double a ,b; // major, minor radius
	//std::string color; from Shape class
};

#endif /* ELLIPSE_H_ */
