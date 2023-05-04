#include "main.h"

/**
  * set_bit- func that sets the value of a bit to 1 at a given index
  * @n: pointer to unsigned long int head
  * @index:  index, starting from 0 of the bit to be printed
  * Return: 1 if it works, or -1 if it fails
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
