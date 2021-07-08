#include "holberton.h"

/**
 * _puts_recursion - writes a string to stdout by recursion
 * @s: The string to be written
 *
 * Return: non-negative value is returned
 * On error, returns EOF
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
