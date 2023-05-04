#include "main.h"

/**
  * get_bit- function that returns the value of a bit at a given index
  * @n: integer to be returned
  * @index:  index, starting from 0 of the bit to be printed
  * Return: the value of the bit at index index or -1 if it fails
**/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);

	bit_num = (n >> index) & 1;

	return (bit_num);
}
