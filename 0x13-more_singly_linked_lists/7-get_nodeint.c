#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The pointer.
 * @index: is the index of the node, starting at 0.
 *
 * If the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *p;
unsigned int i;
p = head;
if (head == NULL)
return (NULL);
else
{
for (i = 0; i < index; i++)
p = p->next;
return (p);
}
}
