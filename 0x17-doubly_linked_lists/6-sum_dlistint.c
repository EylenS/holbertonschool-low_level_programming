#include "lists.h"

/**
 * sum_dlistint - adds up all the data "n" from the linked list.
 * @head: pointer to head of the current list
 * Return: the result of the sum, if the list is empty, 0
 */
int sum_dlistint(dlistint_t *head)
{
	int n, sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		n = head->n;
		sum = sum + n;
		head = head->next;
	}
	return (sum);
}
