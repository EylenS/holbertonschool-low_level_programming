#include "lists.h"

/**
 * listint_len - Prints all the elements of a listint_t list
 * @h:The pointer
 *
 * Return: the number of nodes. On Error return negative number.
 */
size_t listint_len(const listint_t *h)
{
    int the_counter = 1;
    
    if (h->next != NULL)
        the_counter = listint_len(h->next) + 1;
    return (the_counter);
}