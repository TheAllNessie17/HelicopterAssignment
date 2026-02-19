#include "Helicop.h"

// Constructor
Helicop::Helicop()
{
	altitude = 0;
	distance = 0;

}

void Helicop::ascend()
{
	altitude += 100;
}

void Helicop::descend()
{
	altitude -= 51;

}
void Helicop::forward()
{
	distance += 200;
}
void Helicop::land()
{
	altitude = 0;
	distance = 0;
}
int Helicop::getAltitude() const
{
	return altitude;
}
int Helicop::getDistance() const
{
	return distance;
}