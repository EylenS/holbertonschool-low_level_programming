#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
			_putchar('_');
	}
	_putchar ('\n');
}
