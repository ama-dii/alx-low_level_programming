#include "lists.h"

/**
  * print_listint- function that prints all the elements of a listint_t list
  * @h: pointer header to const listint_t
  * Return- the number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *nex_ele = h;
	size_t _count = 0;

	while (nex_ele != NULL)
	{
		printf("%d\n", nex_ele->n);
		_count += 1;
		nex_ele = nex_ele->next;
	}
	return (_count);
}
