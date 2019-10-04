
#ifndef DRIVINGSIMULATOR_Skateboard_H
#define DRIVINGSIMULATOR_Skateboard_H
#include <cstdlib>
#include "Vehicle.h"

class Skateboard : public Vehicle {


	

public:
	explicit Skateboard(string brand, string model);

	virtual ~Skateboard();
	
	virtual double mileageEstimate(double time);

	virtual string toString();
};


#endif //DRIVINGSIMULATOR_Skateboard_H
