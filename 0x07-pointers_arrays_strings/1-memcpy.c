#include "holberton.h"

/**
 * _memcpy-Copies n chars from memory area src 2 memry area dest
 * @dest:Pointer 2 the destination array where the content is to be copied
 * @src:Pointer 2 the source of data to be copied
 * @n:Number of bytes to be copied
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <  n; i++)
		dest[i] = src[i];
	return (dest);
}
