#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer 2 pointer 2 head of the current list
 * @index: is the index of the list where the node should be dleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int counter = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	for (counter = 0; counter < index; counter++)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	aux->prev->next = aux->next;
	if (aux->next != NULL)
		aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
