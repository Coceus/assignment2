

#include "Jet.h"
#include <cstdlib>
Jet::Jet() {
	numberOfEngines = 1;
	setBrand("Custom");
	setFuelType("diesil");
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
	return numberOfEngines;
}

void Jet::setEngineNumber(int egineNum) {
	numberOfEngines = egineNum;
}


double Jet::mileageEstimate(double time) {
	int rand1 = rand() % 60 +40;
	double mileage = rand1 * time;
	if (fuelType == "Rocket" &&numberOfEngines >2) {
		mileage += mileage * numberOfEngines * 0.055;
	}
	return mileage;
}

string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString();
}