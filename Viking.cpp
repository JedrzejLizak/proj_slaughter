#include "Viking.h"
#include <cstdlib>
#include <ctime>

Viking::Viking()
{
	_HP = rand() % 10 + 1 + rand ()%5; // losowanie HP i pancerza
	_Power = rand() % 25 + 5;
}