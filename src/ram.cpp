#include "ram.h"



void write(int buffer[])
{
	std::cout << "Fill the Buffer: " << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cin >> buffer[i];
	}
}

void read(int buffer[])
{
	std::cout << "Buffer: " << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << buffer[i] << " ";
	}
}