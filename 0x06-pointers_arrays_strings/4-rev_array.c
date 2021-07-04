#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: The pointer
 * @n: Number of int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int i, mid, aux;

	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
