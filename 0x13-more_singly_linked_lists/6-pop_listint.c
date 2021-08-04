#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer
 *
 * Return: the head node’s data (n). If the linked list is empty, return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int data_n;

	if (*head != NULL)
	{
		p = *head;
		*head = p->next; /* head apuntará al siguiente nodo*/
		data_n = p->n;
		free(p); /* head está apdo al sig nodo, y p borraría el head node */
		return (data_n);
	}
	else
		return (0);
}
