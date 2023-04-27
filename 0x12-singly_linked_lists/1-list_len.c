#include <stdio.h>
#include "lists.h"

/**
  *list_len - funct that prints the member od a list
  *@h: member of the list to be printed
  *Return: 0
**/

size_t list_len(const list_t *h)
{
	unsigned int mem;

	for (mem = 0; h != NULL; mem++)
	{
		h = h->next;
	}

	return (mem);

}

