#include "holberton.h"

/**
 * _strncpy - copies up to n chars from src to dest
 * @dest: The pointer to destination array where the content is to be copied
 * @src: The string to be copied
 * @n: Number of chars to be copied from source
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size_dest = 0;
	int size_src = 0;
	int c;

	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	if (n > size_dest)
		n = size_dest;
	if (n < 0)
		n = 0;
	for (c = 0; c < n; c++)
	{
		if (c > size_src)
			dest[c] = '\0';
		dest[c] = src[c];
	}
	return (dest);
}
