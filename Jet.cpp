//
// Created by Esteban Parra on 9/5/19.
//

#include "Jet.h"

Jet::Jet() {
	myEngineNum = 1
	setBrand("Custom");
	setModel("Millennium falcon");
}

Jet::Jet(string brand, string model, string fuelType, int engineNum) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineNumber(engineNum);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
	return myEngineNum;
}

void Jet::setEngineNumber(int egineNum) {
	myEngineNum = egineNum;
}


double Jet::mileageEstimate(double time) {
	int rand = rand() % 60 +40;
	double mileage = rand * time;
	if (fuelType == "Rocket" &&myEngineNum>2) {
		mileage += mileage * numberOfengines * 0.055;
	}
	return mileage;
}

string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
		getNumberOfEngines();
}