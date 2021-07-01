#include "holberton.h"

/**
 * puts_half - Prints every other character of a string
 * @str: a pointer type char
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	i = len - (len / 2);
	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
