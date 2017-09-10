/*
 * Circle.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Ellipse.h"
#include "Shape.h"

class Circle : public Ellipse {
public:
	Circle(double a_);
	double CalculateArea();
	double CalculatePerimeter();
	void Print();
	void SetColor(std::string color_);
	virtual ~Circle();

// From the Ellipse class
//protected:
	//double a ,b; // major, minor radius
	//std::string color; from Shape class
};

#endif /* CIRCLE_H_ */
