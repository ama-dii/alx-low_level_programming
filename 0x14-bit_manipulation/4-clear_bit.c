#include "main.h"

/**
  * clear_bit-  func that sets the value of a bit to 0 at a given index
  * @n: integer for the valu of a bit
  * @index: index, starting from 0 of the bit to be printed
  * Return: 1 if it works, or -1 if fails
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
