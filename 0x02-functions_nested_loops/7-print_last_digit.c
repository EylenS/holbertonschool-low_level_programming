#include "holberton.h"

/**
 * print_last_digit - print las digit to stdout
 * @i: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = i * (-1);
	a = i % 10;
	_putchar(a + 48);
	return (a);
}
