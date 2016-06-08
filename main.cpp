/*

PROJECT SLAUGHTER

DEADLINE: 8.06.16r.

*/

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>

#include "Slav.h"

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
		for (int i = 0; i < 1000000; i++)
		{
			Slav Twardostoj, Msciwor;
			std::vector<Slav> fighters;
			fighters.push_back(Twardostoj);
			fighters.push_back(Msciwor); ;

			int WhoDies = 0;
			for (int i = 0; i < 100; i++)
			{
				int WhoHits = rand() % 2;
				fighters[1 - WhoHits].set_HP(fighters[WhoHits].Power());
				if (fighters[1 - WhoHits].HP() <= 0)
				{
					break;
				}
				else
				{
					(fighters[WhoHits].set_HP(fighters[1 - WhoHits].Power()));
				}
				if (fighters[0].HP() <= 0)
				{
					WhoDies = 0;
					break;
				}
				if (fighters[1].HP() <= 0)
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
			}

			fighters.clear();

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
	 system("pause");
}