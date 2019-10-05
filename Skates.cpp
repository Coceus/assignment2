#include "Skates.h"
#include <cstdlib>
Skates::Skates(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skates::~Skates() = default;



double Skates::mileageEstimate(double time) {
	int rand1 = rand() %  5+1;
	int slant = rand() % 9 + 1;
	double mileage = rand1 * time;
	
		mileage += slant*9.8*time;
	
	return mileage;
}

string Skates::toString() {
	return "->Skates\n" + Vehicle::toString();
}