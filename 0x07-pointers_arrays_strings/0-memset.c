#include "holberton.h"

/**
 * _memset- Copies de chars c 2 the 1st n chars of teh string pointed
 * @s:The pointer to the block of memory 2 fill
 * @b:Value to be set
 * @n:Number of bytes to be set to the value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
