#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_list- funct that frees a list
  * @head: pointer to pointer of head of linked list
  * Return: nothing
**/

void free_list(list_t *head)
{
	list_t *temp_free;

	for (temp_free = head; temp_free != NULL; temp_free = temp_free->next)
	{
		free(temp_free->str);
		free(temp_free);
	}
}
