#include "lists.h"

/**
  * add_nodeint_end- funct that adds node at the end of a listint_t list.
  * @head: pointer to the listint_t head
  * @n: integer that prints the new node
  * Return: new node or NULL if it fails
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nex_nod;
	listint_t *nod = *head;

	nex_nod = malloc(sizeof(listint_t));
	if (nex_nod != NULL)
	{
		nex_nod->n = n;
		nex_nod->next = NULL;
	}
	else
		return (NULL);
	if (nod != NULL)
	{
		while (nod->next != NULL)
			nod = nod->next;
		nod->next = nex_nod;
	}
	else
		*head = nex_nod;
	return (nex_nod);
}
