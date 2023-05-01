#include "lists.h"

/**
  * pop_listint- func that delete the head node of listint list
  * @head: pointer to listint_t head
  * Return: 0
**/

int pop_listint(listint_t **head)
{
	listint_t *free_temp;
	int n;

	free_temp = *head;

	if (free_temp == NULL)
	return (0);

	*head = free_temp->next;
	n = free_temp->n;
	free(free_temp);
	return (n);
}
