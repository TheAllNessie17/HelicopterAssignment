#include <iostream>
#include <cctype>
#include "Helicop.h"

void cmdAscend(Helicop& heli)
{
	heli.ascend(); // call class function to ascend the helicopter

    std::cout << "Ascending 100 feet...\n";
    std::cout << "Current altitude: "
		      << heli.getAltitude() << " feet\n";
}

void cmdForward(Helicop& heli)
{
	heli.forward(); // call class function to move the helicopter forward

	std::cout << "Flying forward 200 feet...\n";
	std::cout << "Distance traveled: "
		      << heli.getDistance() << " feet\n";
}

void cmdDescend(Helicop& heli)
{
	heli.descend(); // call class function to descend the helicopter

	if (heli.getAltitude() < 0)
	{
		std::cout << "The helicopter has crashed you descended too far!\n";
		std::cout << "Mission failed.\n";
		std::cout << "Distance flown: "
			<< heli.getDistance() << " feet\n";

		return;
	}
	std::cout << "Decending 51 feet...\n";
	std::cout << "Current Altitude: "
		<< heli.getAltitude() << " feet\n";
}
void cmdLand(Helicop& heli)
{
	std::cout << "Landing...\n";
	std::cout << "Distance flown: "
		<< heli.getDistance() << " feet\n";
	heli.land(); // call class function to land the helicopter
 }
int main()
{
    std::cout << "Welcome Pilot!\n";
	std::cout << "You are on a rescue mission to save a stranded hiker. \n";

	char command;

    return 0;
}
