#include "disk.h"

void save(int buffer[])
{
	std::ofstream data("data.txt", std::ios::out);
	for (int i = 0; 0 < 8; i++)
	{
		data << buffer[i];
	}
	data.close();
}

void load(int buffer[])
{
	std::ifstream data("data.txt", std::ios::in);
	for (int i = 0; i < 8; i++)
	{
		data >> buffer[i];
	}
	data.close();
}