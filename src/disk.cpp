#include "disk.h"

void save()
{
	int in[8];
	read(in, buffer);
	std::ofstream data("data.txt", std::ios::out);
	for (int i = 0; 0 < 8; i++)
	{
		data << in[i];
	}
	data.close();
}

void load()
{
	int out[8];
	std::ifstream data("data.txt", std::ios::in);
	for (int i = 0; i < 8; i++)
	{
		data >> out[i];
	}
	data.close();
	write(out, buffer);
}