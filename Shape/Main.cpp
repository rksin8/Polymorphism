/*
 * Main.cpp
 *
 *  Created on: 10-Sep-2017
 *      Author: ranjeet
 */


#include <iostream>

#include "Shape.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Rectangle.h"


int main(int argc, char **argv) {

	Shape *s = new Ellipse(5,3);
	s->Print();

	s->SetColor("red");
	s->Print();

	delete s;

	Shape *c = new Circle(4.0);
	c->Print();
	c->SetColor("Blue");
	c->Print();

	delete c;

	Shape *r = new Rectangle(5,3);
	r->Print();

	r->SetColor("Yellow");

	r->Print();

	delete r;

	return 0;

}
