#include "Helicop.h"

// Constructor
helicop::helicop()
{
	altitude = 0;
	distance = 0;

}

void helicop::ascend()
{
	altitude += 100;
}

void helicop::decend()
{
	altitude -= 51;

}
