#include "lists.h"

/**
 * print_list - printsall the elements of a list_t list
 * @h: counter of nodes
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int contador = 1;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		contador = print_list(h->next) + 1;
	return (contador);
}
