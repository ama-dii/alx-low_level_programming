#include "lists.h"

/**
  * reverse_listint: func that reverses a listint_t linked list
  * @head: pointer to listint_t head
  * Return: pointer to the first node of the reversed list
**/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pop;
	listint_t *nax;

	pop = NULL;
	nax = NULL;

	while (*head != NULL)
	{
		nax = (*head)->next;
		(*head)->next = pop;
		pop = *head;
		*head = nax;
	}

	*head = pop;
	return (*head);
}
