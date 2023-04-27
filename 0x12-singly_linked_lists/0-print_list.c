#include <stdio.h>
#include "lists.h"

/**
  *print_list- func that prints the element of a list
  * @h: elemnt of the list to be printed
  * Return: the number of nodes
**/

size_t print_list(const list_t *h)
{
	int nlist;

	for (nlist = 0; h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nlist++;
	}

	return (nlist);
}

