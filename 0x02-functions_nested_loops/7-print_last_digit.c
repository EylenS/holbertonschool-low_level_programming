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
	int a, b;

	a = i % 10;

	if (i < 0)
	{
		b = 48 - a;
		_putchar(b);
	}
	else
	{
		b = 48 + a;
		_putchar(b);
	}
	return (b - 48);
}
