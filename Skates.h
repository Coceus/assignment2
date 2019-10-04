
#ifndef DRIVINGSIMULATOR_Skates_H
#define DRIVINGSIMULATOR_Skates_H

#include "Vehicle.h"

class Skates : public Vehicle {




public:
	explicit Skates(string brand, string model);

	virtual ~Skates();

	virtual double mileageEstimate(double time);

	virtual string toString();
};


#endif //DRIVINGSIMULATOR_Skates_H
