#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers (0-14)
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 14; j++)
				{
					if (j >= 10)
						_putchar(j / 10 + '0');
					_putchar(j % 10 + '0');
				}
			_putchar('\n');
		}
}