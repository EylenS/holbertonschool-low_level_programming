#include "holberton.h"

/**
 * _isdigit - checks for a digit (o through 9) to stdout
 * @c: if c is a digit return 1, 0 otherwise
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
