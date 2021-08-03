#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of the list.
 * @head: A pointer will change the value of *header. Pointer 2 pointer.
 * @n: the new element to be add in the beggining.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last;
listint_t *new; /* new element*/
last = *head; /*last points head pointer*/

if (last == NULL) /*If is NULL, means that this is the last one*/
{
last = malloc(sizeof(listint_t));
last->n = n;
last->next = NULL;
*head = last;
return (last);
}
else
{
while (last->next != NULL)
{
last = last->next;
}
new = malloc(sizeof(listint_t));
new->n = n;
new->next = NULL;
last->next = new;
return (new);
}
}
