#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: The pointer.
 *
 * If the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
listint_t *p;
int sum = 0;
if (head == NULL)
{
return (0);
}
p = head;
while (p != NULL)
{
sum = sum + p->n;
p = p->next;
}
return (sum);
}