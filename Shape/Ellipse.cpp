/*
 * Ellipse.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#include "Ellipse.h"
# define M_PI           3.14159265358979323846  /* pi */

//Constructor
Ellipse::Ellipse(double a_, double b_):a(a_),b(b_){}


double Ellipse::CalculateArea() {
	return M_PI*a*b;
}

double Ellipse::CalculatePerimeter() {
	return 4*(a+b)*(M_PI/4.0);
}

void Ellipse::Print() {
	std::cout<< "Ellipse:: color=" << Ellipse::color<<  " Area ="<< CalculateArea()<< " Perimeter= "<< CalculatePerimeter()<< std::endl;
}

void Ellipse::SetColor(std::string color_) {
	color=color_;
}

Ellipse::~Ellipse() {
	// TODO Auto-generated destructor stub
	std::cout<<"~Ellipse() \n";
}
