#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
  * add_node-  func that adds a new node at the beginning of a list_t list
  *@head: pointer to pointer of head of linked list
  *@str: const char pointer to string
  * Return: the address of the new element, or NULL if it failed
**/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int in;
	list_t *new_nod;

	new_nod  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new_nod->str = NULL;
		new_nod->len = 0;
		new_nod->next = *head;
	}

	if (new_nod == NULL)
		return (NULL);

	new_nod->next = *head;
	*head = new_nod;

	new_nod->str = strdup(str);

	for (in = 0; str[in]; in++)
		;

	new_nod->len = in;

	return (new_nod);

}
