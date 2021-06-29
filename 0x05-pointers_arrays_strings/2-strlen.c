#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: a pointer type char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
