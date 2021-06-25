#include "holberton.h"

/**
 * _isupper - checks for uppercase char c to stdout
 * @c: Returns 1 if c is uppercase, 0 otherwise
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
