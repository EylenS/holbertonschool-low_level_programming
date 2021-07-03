#include "holberton.h"

/**
 * _strncat - concatenates 2 strings, using n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int size_dest;
	int size_src;
	int i = 0;
	int j = 0;
	int c;

	while (dest[i] != '\0')
	{
		i++;
	}
	size_dest = i;
	while (src[j] != '\0')
	{
		j++;
	}
	size_src = j;
	if (n > size_src)
		n = size_src;
	if (n < 0)
		n = 0;
	for (c = 0; c < n; c++)
	{
		dest[size_dest + c] = src[c];
	}
	return (dest);
}
