#include "ram.h"



void write(int in[])
{
	
	for (int i = 0; i < 8; i++)
	{
		in[i] = buffer[i];
	}
}

void read(int out[])
{
	for (int i = 0; i < 8; i++)
	{
		buffer[i] = out[i];
	}
}