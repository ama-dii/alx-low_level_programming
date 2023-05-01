#include "lists.h"

/**
  * insert_nodeint_at_index-
  * @head: pointer to listint_t head
  * ind: index of the list where the new node should be added
  * n: interger to be added
  * Return: new node or NULL if it fails
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nod, *temp_space = *head;
	unsigned int nod;

	new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
	return (NULL);

	new_nod->n = n;

	if (idx == 0)
	{
		new_nod->next = temp_space;
		*head = new_nod;
		return (new_nod);
	}

	for (nod = 0; nod < (idx - 1); nod++)
	{
		if (temp_space == NULL || temp_space->next == NULL)
		return (NULL);

		temp_space = temp_space->next;
	}

	new_nod->next = temp_space->next;
	temp_space->next = new_nod;

	return (new_nod);
}
