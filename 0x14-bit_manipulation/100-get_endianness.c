#include "main.h"

/**
  * get_endianness- func that checks the endianness
  * Return: void
**/

int get_endianness(void)
{
	unsigned int mem = 1;
	char *zaphi = (char *)&mem;

	if (*zaphi)
		return (1);
	return (0);
}
