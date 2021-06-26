#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int m, u;

	if (n > 0)
	{
		for (u = 0; u < n; u++)
		{
			for (m = 0; m < u; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar ('\n');
}
