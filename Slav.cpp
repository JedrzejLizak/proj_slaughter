#include "Slav.h"
#include <cstdlib>
#include <ctime>

Slav::Slav()
{
	_HP = rand() % 10 + 1;
	_Power = rand() % 20 + 1;
}