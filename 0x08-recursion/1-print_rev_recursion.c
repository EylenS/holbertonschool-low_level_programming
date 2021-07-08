#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to be written in reverse
 *
 * Return: void return
 * Error
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
