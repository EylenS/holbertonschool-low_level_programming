#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*Prototypes*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int pr_char(va_list list);
int pr_int(va_list list);
int pr_float(va_list list);
int pr_string(va_list list);

/*structs*/
typedef struct op
{
	char pr;
	int (*f)(va_list);
} op_t;

#endif
