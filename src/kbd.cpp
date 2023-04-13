#include "kbd.h"

void inp()
{
	int in[8];
	std::cout << "Fill the Buffer: " << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> in[i];
	}
	write(in, buffer);
}