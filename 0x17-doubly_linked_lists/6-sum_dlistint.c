#include "lists.h"

/**
 * sum_dliitint - function that sum of elements in list
 * @head: pointer to head of a list
 * Return: returns zero if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

