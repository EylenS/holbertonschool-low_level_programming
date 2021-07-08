#include "holberton.h"

/**
 * _strlen_recursion - computes the length of the string s
 * @s: The string whose length is to be found
 *
 * Return: returns the length of string
 * On error: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
		return (len);
	}
	return (0);
}
