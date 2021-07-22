#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: name of the person
 * @f: function pointer
 *
 * Return: void function
 * On error, exit
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
