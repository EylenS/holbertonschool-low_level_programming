#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: pointer which point to a new space in memory which s1 and s2
 * On failure return NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int size_s1, size_s2, size;
	char *p;

	if (s1 == NULL)
		return (00);
	if (s2 == NULL)
		return (00);
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	size_s1 = i;
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	size_s2 = i;
	size = size_s1 + size_s2 + 1;
	p = malloc(sizeof(char) * size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (i < size_s1)
				p[i] = s1[i];
			else
				p[i] = s2[i - size_s1];
		}
		return (p);
	}
	return (00);
}
