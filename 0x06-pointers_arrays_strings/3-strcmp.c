#include "holberton.h"

/**
 * _strcmp - compares the string pointed to.
 * @s1: This is the first string to be compared
 * @s2: This is the second string to be compared
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	if (i < j)
		return (-15);
	if (i > j)
		return (15);
	return (0);
}
