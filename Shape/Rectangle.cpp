/*
 * Rectangle.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */
#include<iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double l_, double b_):l(l_),b(b_) {
}

double Rectangle::CalculateArea() {
	return l*b;
}

double Rectangle::CalculatePerimeter() {
	return 2*(l+b);
}

void Rectangle::SetColor(std::string color_) {
	color = color_;
}


void Rectangle::Print() {
	std::cout<< "Rectangle:: color=" << color<<  " Area ="<< CalculateArea()<< " Perimeter= "<< CalculatePerimeter()<< std::endl;

}


Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
	std::cout<<"~Rectangle()\n";
}
