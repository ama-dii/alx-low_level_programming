#include "lists.h"

/**
 * free_listint_safe - func that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{

size_t len_of_list = 0;
int df;
listint_t *T;
if (!h || !*h)
return (0);
while (*h)
{
df = *h - (*h)->next;
if (df > 0)
{
T = (*h)->next;
free(*h);
*h = T;
len_of_list++;
}
else
{
free(*h);
*h = NULL;
len_of_list++;
break;
}
}
*h = NULL;
return (len_of_list);

}
