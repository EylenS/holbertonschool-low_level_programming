#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key:  is the key.
 * @value: is the value associated with the key. 
 * key can not be an empty string, while value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int idx;

	if (ht == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return(0);
	
	idx = key_index((unsigned char *)key, ht->size);
	
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[idx] != NULL)
		new->next = ht->array[idx];
	new->next = NULL;
	ht->array[idx] = new;
	return (1);
}
