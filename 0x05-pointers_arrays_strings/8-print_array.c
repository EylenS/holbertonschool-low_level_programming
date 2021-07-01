#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of int
 * @a: a pointer type int
 * @n: number of elements of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
		for (i = 0; i <= (n - 1); i++)
		{
			printf("%i", *(a + i));
			if (i != n - 1)
				printf(", ");
			else
				printf("\n");
		}
}
