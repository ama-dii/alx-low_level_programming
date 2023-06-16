#include "lists.h"

/**
 * add_dnodeint_end - func that add element at the end of the list
 * @head: pointer to head of list
 * @n: new node
 * Return: new node/NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	end = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (end->next)
	{
		end = end->next;
	}
	end->next = new;
	new->prev = end;
	new->next = NULL;
	new->n = n;
	return (new);
}
