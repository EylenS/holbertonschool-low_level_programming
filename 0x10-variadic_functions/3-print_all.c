#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: list of types of arguments passed to the function
 * c: chart, i: int, f: float, s: char *
 *
 * Prints anything
 * If s is NULL, prints (nil). Any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *buffer;
	int i = 0;

	va_start(args, format);
	while (*(format + i) != '\0')
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			buffer = va_arg(args, char *);
			if (buffer != NULL)
				printf("%s", buffer);
			else
				printf("(nil)");
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
