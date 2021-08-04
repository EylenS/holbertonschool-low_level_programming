#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The pointer to pointer.
 * @idx: the index of the list where the new node should be added. Starts at 0.
 * @n: The element to add in the node.
 * Returns: the address of the new node, or NULL if it failed.
 * If it's not possible to add new node, dont add the and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *new;
unsigned int i;
p = *head;
if (head == NULL) /* si es NULL, significa que list está vacía */
return (NULL);
else /* caso: list no está vacío */
{

for (i = 0; i < idx - 1; i++) /* se resta 1 a idx, porque p aumenta 1*/
{
if (p->next == NULL)
return (NULL);
p = p->next; /*actualizar el auntador al sig nodo */
} /*terminado el recorrido, se reserva la memoria */
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = p->next;
p->next = new;
return (new);
}
}
