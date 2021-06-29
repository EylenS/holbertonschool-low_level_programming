#include "holberton.h"

/**
 * _puts - Prints a string to stdout
 * @str: a pointer type char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
