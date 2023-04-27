#include <stdio.h>
#include "lists.h"

/**
  * add_node-  func that adds a new node at the beginning of a list_t list
  *@head: pointer to pointer of head of linked list
  *@str: const char pointer to string
  * Return: the address of the new element, or NULL if it failed
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *adnod;
	int nod = 0;

	adnod = malloc(sizeof(list_t));
	if (adnod == NULL)
		return (NULL);

	while (str[nod])
		nod++;

	adnod->len = nod;
	adnod->str = strdup(str);
	adnod->next = *head;
	*head = adnod;
	return (adnod);

}
