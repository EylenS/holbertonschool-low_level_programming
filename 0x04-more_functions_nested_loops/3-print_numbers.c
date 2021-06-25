#include "holberton.h"

/**
 * print_numbers - print numbers, from 0 to 9
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		_putchar(n);
	_putchar('\n');
}
