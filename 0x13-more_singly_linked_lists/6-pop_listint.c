#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer
 *
 * Returns the head node’s data (n). If the linked list is empty, return 0
 */
int pop_listint(listint_t **head)
{
listint_t *p;
int data_n;
p = *head;
if (*head == NULL)
return (0);
else
{
*head = p->next; /* head apuntará al siguiente nodo*/
data_n = p->n;
free(p); /* head está apdo al sig nodo, y p borraría el head node */
}
return (data_n);
}
