#include "Slav.h"
#include <stdlib.h>
#include <time.h>

Slav::Slav()
{
	_HP = rand() % 10 + 1;
	_Power = rand() % 20 + 1;
}
