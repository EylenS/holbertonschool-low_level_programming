#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h:The pointer
 *
 * Return: the number of nodes. On Error return negative number.
 */
size_t print_listint(const listint_t *h)
{
int the_counter = 1;

printf("%d\n", h->n);
if (h->next != NULL)
the_counter = 1 + print_listint(h->next);
return (the_counter);
}
