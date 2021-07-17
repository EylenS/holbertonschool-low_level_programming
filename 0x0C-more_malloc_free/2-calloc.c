#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array by malloc
 * @nmemb: Numbers of elements
 * @size: Number of bytes
 *
 * Return: pointer to the allocated memory
 * On error, process termination with a status value of 98
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (00);
	p = malloc(nmemb * size);
	if (p != 0)
		return (p);
	return (00);
}
