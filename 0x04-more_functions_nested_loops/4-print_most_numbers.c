#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9 followed by a new line
 * Description: Prints the numbers excluding 2 and 4
 * Return: the numbers from 0 up to 9 followed by a new line
 */

void print_most_numbers(void)
{
	int x;

	for (x=0; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
 	{		
	continue
	}
		else
	{
	_putchar(x + '0')
	}
	}
	_putchar('\n');
}

