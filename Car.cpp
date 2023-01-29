#include "Car.h"



Car::Car():_speed(0), _acceliration(15), _cornering_speed(90) {}

int Car::getSpeed(){
	return _speed;
}
void Car::Acceleration_speed(const char road_section) {
	if (road_section == '+' || road_section == '-')
		_speed = _cornering_speed;
	else
		_speed += _acceliration;
	TimeSection();
}

void Car::Set_cornering_speed(std::string& weather){
	if (weather == "rain")
		_cornering_speed = 80;
	else
		if (weather == "snow")
			_cornering_speed = 60;
		else
			_cornering_speed = 90;
}
double Car::Get_timeSection() const {
	return _time_section;
}

void Car::ResetParam(){
	_speed = 0;
	_acceliration = 15;
	_cornering_speed = 90;
	_time_section = 0;
}

void Car::TimeSection(){
	_time_section = 200.0 / _speed;
}
