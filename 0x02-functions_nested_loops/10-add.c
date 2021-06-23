#include "holberton.h"

/**
 * add - add two integers and returns the result
 * @a: The character to add
 * @b: the character to add
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}
