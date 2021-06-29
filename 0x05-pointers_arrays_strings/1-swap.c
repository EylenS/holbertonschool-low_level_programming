#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: a pointer
 * @b: an other pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int *c;
	int v = 0;

	c = &v;
	*c = *a;
	*a = *b;
	*b = *c;
}
