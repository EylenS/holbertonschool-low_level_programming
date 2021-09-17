#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer 2 pointer 2 head of the current list
 * @n: the integer to be added in the new node
 * @idx: is the index of the list where the new node should be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int counter;

	aux = *h;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* touring nodes */
	while (counter < idx - 1)
	{
		counter++;
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (aux->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = aux->next;
	aux->next = new;
	new->prev = aux;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
