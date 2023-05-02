#include "lists.h"

/**
  * print_listint_safe- func that reverses a listint_t linked list
  * @head: pointer to const listint_t head
  * Return:  pointer to the first node of the reversed list
**/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *T_n = NULL;
const listint_t *l_n = NULL;
size_t count = 0;
size_t New_node;
T_n = head;
while (T_n)
{
printf("[%p] %d\n", (void *)T_n, T_n->n);
count++;
T_n = T_n->next;
l_n = head;
New_node = 0;
while (New_node < count)
{
if (T_n == l_n)
{
printf("-> [%p] %d\n", (void *)T_n, T_n->n);
return (count);
}
l_n = l_n->next;
New_node++;
}
if (!head)
exit(98);
}
return (count);
}
