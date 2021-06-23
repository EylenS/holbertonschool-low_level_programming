#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day to stdout
 * @h @m @l @c @d @u : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int h, m, l, c, d, u;

	for (h = 0; h < 24; h++)
	{
		c = h % 10;
		l = (h - c) / 10;
		for (m = 0; m < 60; m++)
		{
			_putchar(l + 48);
			_putchar(c + 48);
			_putchar(':');
			u = m % 10;
			d = (m - u) / 10;
			_putchar(d + 48);
			_putchar(u + 48);
			_putchar('\n');
		}
	}
}
