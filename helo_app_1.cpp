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

	Helicop heli; // create the helicopter object

	char command;

	while (true)

	{
		std::cout << "\nA = Ascend | D = Descend | F = Forward | L = Land\n";
		std::cout << "Enter command: ";
		std::cin >> command;

		command = std::toupper(command); // make case-insensitive

		if (command == 'A')
		{
			cmdAscend(heli);

		}
		else if (command == 'D')
		{
			cmdDescend(heli);

			// crash detection
			if (heli.getAltitude() < 0)
			{
				break; // end mission when helicopter crashes
			}

		}
		else if (command == 'F')
		{
			cmdForward(heli);

		}
		else if (command == 'V')
		{
			cmdLand(heli);

		}
		else if (command == 'Q')
		{
			std::cout << "You quit mid-air. Crash!\n";
			std::cout << "Mission failed.\n";
			break;
		}
		else
		{
			std::cout << "Invalid command. Please try again.\n";
		}
	}

    return 0;
}
