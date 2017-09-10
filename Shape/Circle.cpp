/*
 * Circle.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#include "Circle.h"

#include "Ellipse.h"
#include "Shape.h"

Circle::Circle(double a_):Ellipse(a_,a_) {}
// the method will be same as ellipse

double Circle::CalculateArea() {
	return a*a;
}

double Circle::CalculatePerimeter() {
	return 2*a*3.14;
}

void Circle::Print() {
	std::cout<< "Circle:: color=" << color<<  " Area ="<< CalculateArea()<< " Perimeter= "<< CalculatePerimeter()<< std::endl;
}

void Circle::SetColor(std::string color_) {
	Circle::color = color_;
}

Circle::~Circle() {
	// TODO Auto-generated destructor stub
	std::cout<<"~Circle()\n";
}

