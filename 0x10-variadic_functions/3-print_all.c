#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int pr_char(va_list list);
int pr_int(va_list list);
int pr_float(va_list list);
int pr_string(va_list list);

/**
 * pr_char - Prints the argument type char
 * @list: argument
 *
 * Return: On success 0
 * Take into account the data structure
 */
int pr_char(va_list list)
{
	printf("%c", va_arg(list, int));
	return (0);
}

/**
 * pr_int - Prints the argument type int
 * @list: argument
 *
 * Return: On success 0
 * Take into account the data structure
 */
int pr_int(va_list list)
{
	printf("%d", va_arg(list, int));
	return (0);
}

/**
 * pr_float - Prints argument type float
 * @list: argument
 *
 * Return: On success 0
 * Take into account the data structure
 */
int pr_float(va_list list)
{
	printf("%f", va_arg(list, double));
	return (0);
}

/**
 * pr_string - Prints argument type string
 * @list: argument
 *
 * Return: On success 0
 * Take into account the data structure
 */
int pr_string(va_list list)
{
	printf("%s", va_arg(list, char *));
	return (0);
}

/**
 * print_all - Prints anything type data
 * @format: list of types of arguments passed to the function
 * c: chart, i: int, f: float, s: char *
 *
 * Prints anything
 * If s is NULL, prints (nil). Any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	op_t ops[4] = {
		{'c', pr_char},
		{'i', pr_int},
		{'f', pr_float},
		{'s', pr_string}
};

va_list args;
int i, j;
i = 0;
j = 0;

va_start(args, format);

while (format[i] != '\0')
{
	j = 0;
	while (j < 4)
	{
		if (format[i] == ops[j].pr)
		{
			ops[j].f(args);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		j++;
	}
	i++;
}
va_end(args);
printf("\n");
}
