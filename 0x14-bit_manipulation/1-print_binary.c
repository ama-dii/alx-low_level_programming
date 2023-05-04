#include "main.h"

/**
  * print_binary-  func that prints the binary representation of a number
  * @n: integer to be printed
  * Return: void
**/

void print_binary(unsigned long int n)
{
	int c, num = 0;
	unsigned long int num_add;

	for (c = 63; c >= 0; c--)
	{
		num_add = n >> c;

		if (num_add & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
