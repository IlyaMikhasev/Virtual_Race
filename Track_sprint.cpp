
#include "Track_sprint.h"
Track_sprint::Track_sprint(const std::string& weather):_weather(weather){
	_track = "====-===+===-=====";
}

void Track_sprint::Race(IVehicle& car, IVehicle& moto){
	double time_car = 0, time_moto = 0;
	car.Set_cornering_speed(_weather);
	moto.Set_cornering_speed(_weather);
	for (size_t i = 0; i < _track.size(); i++) {
		car.Acceleration_speed(_track[i]);
		moto.Acceleration_speed(_track[i]);
		time_car += car.Get_timeSection();
		time_moto += moto.Get_timeSection();
	}
	car.ResetParam();
	moto.ResetParam();
	if (time_car > time_moto)
		std::cout << "Motorcycle is wins over time: " << time_moto << '\n';
	else
		if (time_car == time_moto)
			std::cout << "DRAW\n";
		else
			std::cout << "Car is wins over time: " << time_car << '\n';
}
