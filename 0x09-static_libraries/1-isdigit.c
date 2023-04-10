#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: the digit to be checked
 * Return: 1 for a character that will be digit or  0 for any else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
