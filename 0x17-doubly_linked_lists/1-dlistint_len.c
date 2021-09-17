#include "lists.h"

/**
 * dlistint_len - to get the numb. of elements in a linked list.
 * @h: pointer to head of the list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numElements = 0;

	while (h != NULL)
	{
		numElements++;
		h = h->next;
	}
	return (numElements);
}
