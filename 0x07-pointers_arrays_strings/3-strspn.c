#include "holberton.h"

/**
 * _strspn-Calculates the length of the initial segnt which has chars in accept
 * @s:This is the main C string to be scanned
 * @accept:The string containing the list of chars to match in s
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i] != '\0' && i == k)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				k++;
			j++;
		}
		i++;
	}
	return (k);
}
