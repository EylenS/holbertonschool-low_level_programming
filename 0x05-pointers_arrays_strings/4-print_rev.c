#include "holberton.h"

/**
 * print_rev - Prints a string in reverse
 * @s: a pointer type char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
