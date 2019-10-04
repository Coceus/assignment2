#pragma once


#ifndef DRIVINGSIMULATOR_Jet_H
#define DRIVINGSIMULATOR_Jet_H
#include <cstdlib>
#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
	int numberOfEngines;

public:
	Jet();

	explicit Jet(string brand, string model, string fuelType,
		int engineNumber);

	virtual ~Jet();
	int getNumberOfEngines();
	void setEngineNumber(int engineSize);
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_Jet_H
