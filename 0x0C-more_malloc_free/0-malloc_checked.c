#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - function that allocates memory
 * @b: Number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 * On error, process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
