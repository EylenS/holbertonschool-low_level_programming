#include "holberton.h"

/**
 * rev_string - Prints a string in reverse
 * @s: a pointer type char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i, mid;
	int len = 0;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}
	mid = len / 2;
	for (i = 0; i < mid; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = c;
	}
}
