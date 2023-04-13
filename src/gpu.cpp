#include "gpu.h"
#include "ram.h"

void show()
{
	int out[8];
	read(out, buffer);
	for (int i = 0; i < 8; i++)
	{
		std::cout << out[i] << " ";
	}
	std::cout << std::endl;
}