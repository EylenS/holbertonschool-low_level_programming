#include "holberton.h"

/**
 * _abs - absolute value of an integer stdout
 * @r: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int r)
{
	if (r < 0)
		r = r * (-1);
	return (r);
}
