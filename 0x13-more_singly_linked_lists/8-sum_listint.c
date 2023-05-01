#include "lists.h"

/**
  * sum_listint- func that returns the sum of the data of  listint_t list
  * @head: pointer to listint_t head
  * Return:  sum of all the data (n),
  *         or 0 - if the list is empty
**/

int sum_listint(listint_t *head)
{
	int sum_list;

	sum_list = 0;

	while (head)
	{	
	sum_list += head->n;
	head = head->next;
	}
	return (sum_list);
}
