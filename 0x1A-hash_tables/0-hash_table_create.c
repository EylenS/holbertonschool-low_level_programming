#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return:  pointer to the newly created hash table
 * If something went wrong, it should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **head;
	unsigned long int idx = 0;
	hash_table_t *ht;

	/* It is an array of pointers. Each slot of the table */
	/* stores the head of a chained list  */
	head = malloc(sizeof(hash_node_t *) * size);
	if (head == NULL)
		return (NULL);

	/* a slot in the table where no element has been */
	/* inserted, contains a pointer to NULL */
	for (idx = 0; idx < size; idx++)
	{
		head[idx] = NULL;
	}

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(head);
		return (NULL);
	}
	ht->size = size;
	ht->array = head;
	return (ht);
}
