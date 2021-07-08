#include "holberton.h"

/**
 * _pow_recursion -Takes 2 arguments and, returns the power raised 2 the base
 * @x: Base value
 * @y: number of times x is multiplied by itself
 *
 * Return: return the value of x raised to the power of y.
 * On error: -1
 */
int _pow_recursion(int x, int y)
{
	int rise_x = 0;

	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y > 1)
	{
		rise_x = _pow_recursion(x, (y - 1)) * x;
		return (rise_x);
	}
	else
		return (-1);
}
