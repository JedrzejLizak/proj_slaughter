#include "Slav.h"
#include <stdlib.h>
#include <time.h>

Slav::Slav()
{
	_HP = rand() % 40 + 1;
	_Power = rand() % 15 + 1;
}
