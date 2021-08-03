#include "lists.h"

/**
 * free_listint- free the memory.
 * @head: The pointer.
 *
 * This function free the memory previous allocated
 */
void free_listint(listint_t *head)
{
listint_t *p;
p = head; /*I nicializa p */
while (p != NULL) /* busca todos los nodos hasta encontrar el último */
{
p = p->next; /* p apuntará al sig nodo */
free(head); /* se libera el nodo actual */
head = p; /* head se actualiza para apuntar al sig nodo */
}
}
