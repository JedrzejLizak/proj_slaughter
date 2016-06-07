/*

PROJECT SLAUGHTER

DEADLINE: 8.06.16r.

*/

#include <stdlib.h>
#include <iostream>
#include <time.h>

#include "Slav.h"
#include "Viking.h"

void StateOfTheArmy(int* army1, int* army2)
{
	std::cout << "Stan armii Slowian: " << *army1 << std::endl;
	std::cout << "Stan armii Wikingow: " << *army2 << std::endl;
}

int main(int argc, char *argv[])
{

	srand(time(NULL));

	int SlavArmy = rand() % 10000 + 5000;
	int VikingArmy = rand() % 5000 + 1000;

	StateOfTheArmy(&SlavArmy, &VikingArmy);

	while (1)
	{
		for (int i = 0; i < 100000; i++)
		{
			Slav* fighters = new Slav[2];
		//	Slav* fighter1 = new Viking;
		//	Viking* fighter2 = new Viking;
			int WhoDies = 0, WhoHits = rand () % 1;
			
			for (int i = 0; i < 100; i++)
			{
				( fighters[1 - WhoHits].set_HP( fighters[WhoHits].Power() ) );
				if (fighters[1 - WhoHits].HP() <= 0)
				{
					break;
				}
				else
				{
				(fighters[WhoHits].set_HP( fighters[1 - WhoHits].Power() ) );
				}
				if (fighters[2].HP() < 0)
				{
					WhoDies = 1;
					break;
				}
			}
		


			switch (WhoDies)
			{
			case 0: 
				SlavArmy--;
				break;
			case 1: 
				VikingArmy--;
				break;
			};

			delete []fighters;
					
		if (SlavArmy == 0)
		{
			std::cout << "Wikingowie wygrywaja! \n";
			StateOfTheArmy(&SlavArmy, &VikingArmy);
			break;
		}
		if (VikingArmy == 0)
		{
			std::cout << "Slowianie wygrywaja! \n";
			StateOfTheArmy(&SlavArmy, &VikingArmy);
			break;
		}

		}
		break;
	}

}