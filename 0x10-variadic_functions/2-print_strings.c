#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: string to be printed between strings
 * @n: The number of arguments passed
 *
 * Prints the strings and separator passed.
 * If separator is NULL, do not printed. If string is NULL prints (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /*arguments*/
	unsigned int i;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		printf("%s", string);
		if (n - i != 1 && separator != NULL)
			printf("%s", separator);
		if (string == NULL)
			printf("(nil)");
	}
	va_end(args);
	printf("\n");
}
