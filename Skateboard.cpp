#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;



double Skateboard::mileageEstimate(double time) {
	int rand = rand() % 0.4 + 0.1;
	int rand2 = rand() % (time/3) + 1;
	double mileage = rand * time;
	if (25 < time < 250) {
		mileage += rand2;
	}
	return mileage;
}

string Skateboard::toString() {
	return "->Skateboard\n" + Vehicle::toString();
}