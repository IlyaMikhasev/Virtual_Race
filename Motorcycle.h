#pragma once
#include "IVehicle.h"
class Motorcycle:public IVehicle
{
public:
	Motorcycle();
	int getSpeed()override;
	void Acceleration_speed(const char road_section)override;
	void Set_cornering_speed(std::string& weather) override;
	double Get_timeSection() const override;
	void ResetParam()override;
private:
	void TimeSection();
	int _speed;
	double _acceliration;
	int _cornering_speed;
	double _time_section;
};

