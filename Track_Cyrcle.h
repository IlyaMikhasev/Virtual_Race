#pragma once
#include "ITrack.h"
class Track_Cyrcle:public ITrack
{
public:
	Track_Cyrcle(const std::string& weather,int nLaps);
	void Race(IVehicle& car,IVehicle& moto)override;
private:
	std::string _weather;
	std::string _track;
	int _nLaps;
};

