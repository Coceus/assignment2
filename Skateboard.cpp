#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;



double Skateboard::mileageEstimate(double time) {
	int rand1 = rand() % 4 + 1;
	rand1 = rand1 / 10;
	int rand2 = rand() % (int(time/3)) + 1;
	double mileage = rand1 * time;
	if (25 < time < 250) {
		mileage += rand2;
	}
	return mileage;
}

string Skateboard::toString() {
	return "->Skateboard\n" + Vehicle::toString();
}