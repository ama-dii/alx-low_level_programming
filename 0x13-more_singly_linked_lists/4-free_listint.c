#include "lists.h"

/**
  * free_listint- func that free listint
  * @head: pointer to listint_t head
  * Return: 0
**/

void free_listint(listint_t *head)
{
	listint_t *mem_space;

	while (head != NULL)
	{
		mem_space = head;
		head = head->next;
		free(mem_space);
}
