#include "Motorcycle.h"

Motorcycle::Motorcycle() :_speed(0), _acceliration(25), _cornering_speed(60){}

int Motorcycle::getSpeed(){
	return _speed;
}

void Motorcycle::Acceleration_speed(const char road_section){
	if (road_section == '+' || road_section == '-')
		_speed = _cornering_speed;
	else
		_speed += _acceliration;
	TimeSection();
}

void Motorcycle::Set_cornering_speed(std::string& weather){
	if (weather == "rain")
		_cornering_speed = 40;
	else
		if (weather == "snow")
			_cornering_speed = 30;
		else
			_cornering_speed = 60;
}

double Motorcycle::Get_timeSection() const{
	return _time_section;
}

void Motorcycle::ResetParam(){
	_speed = 0;
	_acceliration = 25;
	_cornering_speed = 60;
	_time_section = 0;
}

void Motorcycle::TimeSection(){
	_time_section = 200.0 / _speed;
}
