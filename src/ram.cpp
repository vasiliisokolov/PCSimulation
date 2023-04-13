#include "ram.h"



void write(int(&in)[8], int(&buffer)[8])
{
	
	for (int i = 0; i < 8; i++)
	{
		in[i] = buffer[i];
	}
}

void read(int (&out)[8], int(&buffer)[8])
{
	for (int i = 0; i < 8; i++)
	{
		buffer[i] = out[i];
	}
}