#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: pointer to head of the current linked list
 * @n: the integer to be added in the new node
 * Return: the adderess of the new node of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* the list is empty: Creats the first node */
	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* There is/are element(s) in the list */
	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
