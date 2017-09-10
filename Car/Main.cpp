/*
 * Main.cpp
 *
 *  Created on: 09-Sep-2017
 *      Author: ranjeet
 */

#include <iostream>
#include <vector>

#include "Car.h"
#include "SUV.h"
#include "Sedan.h"
#include "Van.h"
#include "Jeep.h"

using namespace std;

int main() {

	Car* c = new SUV("SUV");
	c->drive();
	delete c;

	Car* sedan = new Sedan("Sedan");
	sedan->drive();
	delete sedan;

	Car* van = new Van("Van");
	van->drive();
	delete van;

	Car* jeep = new Jeep("Jeep");
	jeep->drive();
	delete jeep;

	std::cout << "Accessing all cars together...\n";

	std::vector<Car*> cars;
	cars.push_back(new SUV("SUV"));
	cars.push_back(new Sedan("Sedan"));
	cars.push_back(new Van("Van"));
	cars.push_back(new Jeep("Jeep"));

	for (auto i : cars) {
		i->drive();
	}

	for (auto i : cars) {
		delete i;
	}

//------------OLD WAYS-------------	
	/*
	 for (int i = 0; i < 4; ++i) {
	 cars[i]->drive();
	 }

	 for (int i = 0; i < 4; ++i) {
	 delete cars[i];
	 }

	 */
	return 0;
}
