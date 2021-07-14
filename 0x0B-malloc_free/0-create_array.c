#include <stdlib.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @c: the name of the variable type array
 * @size: number of bytes to allocate
 *
 * Return: NULL if size is 0, a pointer to the array.
 * On error, NULL. If it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *c_a;

	if (size != 0)
	{
		c_a = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			c_a[i] = c;
		}
		return (c_a);
	}
	return (00);
}
