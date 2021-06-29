#include "holberton.h"

/**
 * reset_to_98 - updates the value it points to 98
 * @n: The pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
