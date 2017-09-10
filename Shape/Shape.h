/*
 * Shape.h
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include<iostream>
#include<string>

class Shape
{
public:
	Shape(std::string color_ ="black") //Default color = Black
		:color(color_){};
	virtual double CalculateArea()=0;
	virtual double CalculatePerimeter() =0;
	virtual void Print() =0;
	virtual void SetColor(std::string color_)= 0;
	virtual ~Shape(){};
protected:
	std::string color;
};
#endif /* SHAPE_H_ */
