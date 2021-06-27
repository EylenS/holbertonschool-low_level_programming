#include "holberton.h"

/**
 * print_triangle - draws a diagonal line
 * @size: The size of a triangle
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - 1 - i))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar ('\n');
}
