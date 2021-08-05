#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: Pointer to pointer.
 * @index: the index where the node should be deleted. Starts at 0.
 * Return: 1 -> success. If it failed, return -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *delete; /* delete:nodo a eliminar */
	unsigned int i;

	p = *head;
	if (*head == NULL) /* si es NULL, significa que list está vacío */
		return (-1);
	if (index == 0) /* nodo a borrar es el que se encuentra en la cabecera */
	{
		*head = p->next; /*a *head le asigno el nodo siguiente */
		free(p);
		return (1);
	}
	else
	{ /* idx-1 es el nodo del que sale el puntero al nodo a eliminar */
		for (i = 0; i < index - 1; i++)
		{
			if (p->next == NULL)
				return (-1);
			p = p->next; /* para avanzar entre los nodos*/
		}
		delete = p->next;       /* del. apunta a lo que apunta p-next (idx-1)*/
		p->next = delete->next; /* p.next se le asigna el nodo al que apuntaba*/
		free(delete);
		return (1);
	}
	return (-1);
}
