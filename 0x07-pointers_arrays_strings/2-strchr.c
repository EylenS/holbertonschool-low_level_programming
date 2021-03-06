#include "holberton.h"

/**
 * _strchr-searches 4 the 1st occurence of the char c in string pointed by s
 * @s:This is the C string to be scanned
 * @c:This is the char to be searched in s
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c >= 32 && c <= 126)
		{
			if (s[i] == c)
				return (s + i);
			i++;
		}
	}
	return (00);
}
