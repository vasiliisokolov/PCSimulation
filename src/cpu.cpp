#include "cpu.h"

int compute()
{
	int out[8];
	read(out, buffer);
	int sum = 0;
	for(int i = 0; i < 8; i++)
	{
		sum +=out[i];
	}
	return sum;

}