#include "PCSimulation.h"


enum operation
{
	sum = 0,
	sv = 1,
	ld = 2,
	input = 3,
	display = 4,
	ex = 5
};


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
			case operation::sum:
				std::cout << "Buffer summ is: " << compute(buffer) << std::endl;
				break;
			case operation::sv:
				save(buffer);
				break;
			case operation::ld:
				load(buffer);
				break;
			case operation::input:
				inp(buffer);
				break;
			case operation::display:
				show(buffer);
				break;
			case operation::ex:
				return 0;
				
			}
		}

		
	}

	
}
