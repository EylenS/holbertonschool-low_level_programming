#include "holberton.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (n = 0; n < j; n++)
	{
		dest[i + n] = src[n];
	}
	return (dest);
}
