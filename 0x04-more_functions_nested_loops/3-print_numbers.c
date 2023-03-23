#include "main.h"

/**
 * print_numbers -  Prints the numbers 0 up to 9
 * Return: the numbers since 0 up to 9
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
