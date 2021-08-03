#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: A pointer will change the value of *header. Pointer 2 pointer.
 * @n: the new element to be add in the beggining.
 *
 * Return: the number of nodes. On Error return negative number.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new; /* new element*/

new = malloc(sizeof(listint_t)); /*allocate memory to new var*/
if (new == NULL)
{
return (00);
}
new->next = *head;
new->n = n;
*head = new;
return (new);
}
