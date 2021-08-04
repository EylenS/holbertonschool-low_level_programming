#include "lists.h"

/**
 * free_listint2- free the memory.
 * @head: The pointer.
 *
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
listint_t *p;
if (head == NULL)
return;
p = *head;
while (p != NULL)
{
p = p->next;
free(*head);
*head = p;
}
head = NULL;
}
