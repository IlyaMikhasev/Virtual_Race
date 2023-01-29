#pragma once
#include <iostream>
#include <string>
#include "IVehicle.h"
class ITrack{
public:
	virtual ~ITrack() {}
	virtual void Race(IVehicle& car,IVehicle& moto)=0;
};

