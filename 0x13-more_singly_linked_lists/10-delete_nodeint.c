#include "lists.h"

/**
  * delete_nodeint_at_index- func that deletes node at index of listint_t list
  * @head: pointer to listint_t head
  * @index: index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_mem, *copy_nod = *head;
	unsigned int node;

	if (copy_nod == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy_nod);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy_nod->next == NULL)
		return (-1);

		copy_nod = copy_nod->next;
	}

	temp_mem = copy_nod->next;
	copy_nod->next = temp_mem->next;
	free(temp_mem);
	return (1);
}
