#pragma once
#include <string>
class IVehicle {
public:
	virtual ~IVehicle() {}
	virtual int getSpeed()=0;
	virtual void Acceleration_speed(const char road_section)=0;
	virtual void Set_cornering_speed(std::string& weather)=0;
	virtual double Get_timeSection()const=0;
	virtual void ResetParam()=0;
private:
	virtual void TimeSection()=0;/*
	int _speed;
	double _acceliration;
	int _cornering_speed;
	double _time_section;*/
};
