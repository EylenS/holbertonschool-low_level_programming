#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head of the current linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		free(aux);
		head = head->next;
	}
	free(head);
}
