#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: s2's first numbers of bytes
 *
 * Return: pointer will poiint to a new allocated space in memory
 * on failure, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, size_s1, size_s2;
	char *p;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
		size_s1 = i;
	}
	else
		size_s1 = 0;
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
			i++;
		size_s2 = i;
	}
	else
		size_s2 = 0;
	if (n < size_s2)
		size = size_s1 + n + 1;
	else
		size = size_s1 + size_s2 + 1;
	p = malloc(sizeof(char) * size);
	if (p != 0)
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
