#include "lists.h"

/**
 * find_listint_loop - func that finds the loop in a linked list
 * @head: pointer to listint_t head
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *beg = head;
listint_t *end_of_list = head;
if (!head)
return (NULL);
while (beg && end_of_list && end_of_list->next)
{
end_of_list = end_of_list->next->next;
beg = beg->next;
if (end_of_list == beg)
{
beg = head;
while (beg != end_of_list)
{
beg = beg->next;
end_of_list = end_of_list->next;
}
return (end_of_list);
}
}
return (NULL);
}
