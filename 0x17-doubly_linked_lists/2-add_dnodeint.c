#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: int to set in the new node.
 * Return: new node, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
