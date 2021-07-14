#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup-Returns a pointer, which is a duplicate of the string pointed by str
 * @str: string to be duplicate
 *
 * Return: a pointer to the duplicated string
 * NULL if str is NULL; if insufficient memoria is available
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int size;
	char *c;

	if (str == NULL)
		return (00);
	while (str[i] != '\0')
	{
		i++;
	}
	size = i + 1;
	if (size == 1)
		return (00);
	c = malloc(sizeof(char) * size);
	if (c != NULL)
	{
		for (i = 0; i < size; i++)
		{
			c[i] = str[i];
		}
		return (c);
	}
	return (00);
}
