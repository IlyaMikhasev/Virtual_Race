#pragma once
#include "ITrack.h"
class Track_sprint:public	ITrack
{
public:
	Track_sprint(const std::string& weather);
	void Race(IVehicle& car, IVehicle& moto)override;
private:
	std::string _weather;
	std::string _track;
};

