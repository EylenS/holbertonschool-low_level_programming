#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to head of the current linked list
 * @n: the integer to be added in the new node
 * Return: the adderess of the new node of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

	new->n = n;
	new->next = NULL;
	/* The list is empty, creates the first node */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* node by node until the end */
	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	new->prev = aux;
	aux->next = new;
	return (new);
}
