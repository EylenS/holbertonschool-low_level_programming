#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The pointer to pointer.
 * @idx: the index of the list where the new node should be added. Starts at 0.
 * @n: The element to add in the node.
 * Return: the address of the new node, or NULL if it failed.
 * If it's not possible to add new node, dont add the and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *new;
	unsigned int i;

	p = *head;
	if (*head == NULL) /* si es NULL, significa que list está vacío */
		return (NULL);
	if (idx == 0) /*agregar nodo en la cabeza de list */
	{
		new = malloc(sizeof(listint_t)); /* una vez en idx -1, se reserva memoria*/
		if (new == NULL)
			return (NULL);
		new->next = *head; /*new.next apunta al mismo nodo de *head */
		*head = new; /* ahora *head queda apuntando a new, el nodo cabeza*/
		new->n = n;
	} /* lo que sigue-> caso: idx > 0 */
	for (i = 0; i < (idx - 1); i++) /* -1 porq p->next aumenta 1 posición*/
	{
		if (p->next == NULL)
			return (NULL);
		p = p->next; /* para avanzar entre los nodos*/
	}
	new = malloc(sizeof(listint_t)); /* una vez en idx -1, se reserva memoria*/
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = p->next;
	p->next = new;
	return (new);
}
