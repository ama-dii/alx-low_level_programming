#include "lists.h"

/**
  * listint_len- funct that adds new node at the beginning of a listint_t list.
  * @h: linked list first nod
  * Return: new element nod
**/

size_t listint_len(const listint_t *h)
{
	const listint_t *new_nod = h;
	size_t count_nex = 0;

	while (new_nod != NULL)
	{
		count_nex += 1;
		new_nod = new_nod->next;
	}
	return (count_nex);

}
