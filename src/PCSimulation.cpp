#include "PCSimulation.h"

/*
enum operation
{
	sum = 0,
	save = 1 ,
	load = 2 ,
	input = 3 ,
	display = 4,
	exit = 5
}
*/

int main()
{
	int op;
	std::cout << "PC Simulation." << std::endl;

	while (true)
	{
		std::cout << "Choose the operation: ";
		std::cin >> op;
		if (op > 5 || op < 0)
		{
			std::cerr << "Error! Wrong operation! Try again!" << std::endl;
		}
		else
		{
			switch (op)
			{
			case 0:
				sum();
				break;
			case 1:
				save();
				break;
			case 2:
				load();
				break;
			case 3:
				input();
				break;
			case 4:
				display();
				break;
			case 5:
				return 0;
				
			}
		}

		
	}

	
}
