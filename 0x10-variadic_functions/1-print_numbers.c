#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: string to be printed between numbers
 * @n: The number of arguments passed
 *
 * Prints the number separated by "-", except the last number
 * If separator is NULL, do not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /*arguments*/
	unsigned int i;
	unsigned int value;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			value = va_arg(args, int);
			printf("%d", value);
			if (n - i != 1)
				printf("%s", separator);
		}
		va_end(args);
		printf("\n");
	}
}
