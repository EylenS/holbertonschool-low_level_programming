#include "main.h"

/**
 * _pow - Takes 2 arguments and, returns the power raised 2 the base
 * @x: Base value
 * @y: number of times x is multiplied by itself
 * Return: return the value of x raised to the power of y.
 * On error: -1
 */
int _pow(int x, int y)
{
	int rise_x = 0;

	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y > 1)
	{
		rise_x = _pow(x, (y - 1)) * x;
		return (rise_x);
	}
	else
		return (-1);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b:Pointer that points to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more
 * chars in the string diferrent 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, p, len = 0, sum = 0;

	if (b == 00)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		len = len + 1;
		i++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			p = _pow(2, ((len - 1) - i));
			sum = sum + p;
		}
	}
	return (sum);
}
