#include "lists.h"

/**
  * free_listint2- func that free listint_t list
  * @head: pointer to listint_t head
  * Return: void
**/

void free_listint2(listint_t **head)
{
	listint_t *free_temp;

	if (head == NULL)
	return;

	while (*head)
	{
		free_temp = *head;
		*head = (*head)->next;
		free(free_temp);
	}
	head = NULL;
}
