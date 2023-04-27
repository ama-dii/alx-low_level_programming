#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end- func that adds a new node at the end of a list_t list
  * @head: pointer to a list_t pointer that points to the head struct
  * @str: string to add as node
  * Return: the address of the new element, or NULL if it fails
**/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int n;
	list_t *_newnod;
	list_t *temp;

	_newnod  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (_newnod == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		;

	if (*head == NULL)
	{
		*head = _newnod;
		_newnod->len = n;
		_newnod->str = strdup(str);
		_newnod->next = NULL;
		return (_newnod);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = _newnod;

	_newnod->len = n;
	_newnod->str = strdup(str);
	_newnod->next = NULL;

	return (_newnod);
}
