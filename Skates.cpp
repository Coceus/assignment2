#include "Skates.h"

Skates::Skates(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skates::~Skates() = default;



double Skates::mileageEstimate(double time) {
	int rand = rand() %  5+1;
	int slant = rand() % 9 + 1;
	double mileage = rand * time;
	
		mileage += slant*9.8*time;
	
	return mileage;
}

string Skates::toString() {
	return "->Skates\n" + Vehicle::toString();
}