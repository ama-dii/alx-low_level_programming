#include "main.h"

/**
  * flip_bits- func that returns the number of bits
  * @n: how many bit flips are needed to equal m for n
  * @m: the number to set other equal
  * Return: the number of fliped bits
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int flip_num;
	unsigned long int X = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flip_num = X >> i;
		if (flip_num & 1)
			num++;
	}

	return (num);
}
