#include "holberton.h"

/**
 * times_table - prints 9 times table to stdout
 * @i @j: The characters to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, j, n, u, d, c, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 9; j++)
		{
			n = j * i;
			u = n % 10;
			d = (n - u) / 10;
			if (n > 9)
				_putchar(d + 48);
			else
				_putchar(' ');
			_putchar(u + 48);
			_putchar(',');
			_putchar(' ');
		}
		n = 9 * i;
		c = n % 10;
		l = (n - c) / 10;
		if (n > 9)
			_putchar(l + 48);
		else
			_putchar(' ');
		_putchar(c + 48);
		_putchar('\n');
	}
}
