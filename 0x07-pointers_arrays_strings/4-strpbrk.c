#include "holberton.h"

/**
 * _strpbrk- Finds the 1st char in the string s that matches in accept
 * @s:This is the string to be scanned
 * @accept:The string containing the list of chars to match
 *
 * Return: a pointer to the char in s that matches one of the chars in accept
 * NULL if no such char is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (00);
}
