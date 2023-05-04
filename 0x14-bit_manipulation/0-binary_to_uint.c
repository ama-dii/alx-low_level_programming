#include "main.h"

/**
  * binary_to_uint- func that converts a binary number to an unsigned int
  * @b: pointer to const char head
  * Return: result or 0
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, int_conv;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (int_conv = 1, num = 0, i--; i >= 0; i--, int_conv *= 2)
	{
		if (b[i] == '1')
			num += int_conv;
	}
	return (num);
}
