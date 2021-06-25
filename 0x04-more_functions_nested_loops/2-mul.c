#include "holberton.h"

/**
 * mul - multiplies two integers
 * @a: an integer
 * @b: the other one integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}
