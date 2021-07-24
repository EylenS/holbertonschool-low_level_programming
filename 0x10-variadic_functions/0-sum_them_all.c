#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the result of a sum of all its parameters
 * @n: The number of arguments passed
 *
 * Return: the sum of all parameters.
 * If number of arguments is equal zero, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /*arguments*/
	unsigned int i, value;
	int sum = 0;
	
	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			value = va_arg(args, int);
			sum += value; /*adding value*/
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
