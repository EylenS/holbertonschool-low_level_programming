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

	if (i < 0)
		a = i * (-1);
	else
		a = i;
	b = a % 10;
	_putchar(b + 48);
	return (b);
}
