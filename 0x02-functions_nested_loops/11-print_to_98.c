#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural nuumbers from n to 98
 * @n: The natural number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
	int d = n;

	if (d < 98)
	{
		for (d = n; d <= 98; d++)
		{
			if (d != 98)
				printf("%i, ", d);
			else
				printf("%i", d);
		}
	}
	else if (d > 98)
	{
		for (d = n; d >= 98; d--)
		{
			if (d != 98)
				printf("%i, ", d);
			else
				printf("%i", d);
		}
	}
	else
		printf("%i", d);
	printf("\n");
}
