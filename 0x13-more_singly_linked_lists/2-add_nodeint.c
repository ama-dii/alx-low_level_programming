#include "lists.h"

/**
  * add_nodeint- func that adds node at the beginning of a listint_t list.
  * @head: pointer to the head of listint_t
  * @n: integer that points to the new node
  * Return: the new node, or NULL if it fails
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nex_nod;

	nex_nod = malloc(sizeof(listint_t));
	if (nex_nod != NULL)
	{
		nex_nod->n = n;
		nex_nod->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
	{
		nex_nod->next = *head;
		*head = nex_nod;
	}
	return (nex_nod);
}

