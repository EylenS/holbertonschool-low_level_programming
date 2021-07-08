#include "holberton.h"

/**
 * factorial - calculate the factorial of a number
 * @n: number to which the factorial number is to be calculated
 *
 * Return: return the factorial of a given number
 * On error: -1
 */
int factorial(int n)
{
	int f = 0;

	if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	else if (n > 1)
	{
		f = n * factorial(n - 1);
		return (f);
	}
	else
		return (-1);
}
