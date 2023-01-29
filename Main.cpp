#include <iostream>
#include "ITrack.h"
#include "IVehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Track_Cyrcle.h"
#include "Track_sprint.h"
int main() {
	setlocale(LC_ALL, "Russian");
	IVehicle *car = new Car;
	IVehicle *moto = new Motorcycle;
	std::string snow = "snow", sun = "sun", rain = "rain";
	Track_Cyrcle Laps_s("sun",3);
	Track_Cyrcle Laps_r("rain", 3);
	Track_sprint sprint1(snow);
	Track_sprint sprint2(sun);
	Laps_s.Race(*car, *moto);
	Laps_r.Race(*car, *moto);
	sprint1.Race(*car, *moto);
	sprint2.Race(*car, *moto);
	delete moto, car;
	return 0;
}