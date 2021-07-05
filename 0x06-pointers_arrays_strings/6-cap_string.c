#include "holberton.h"

/**
 * cap_string- capitalizes all words of a string
 * @str: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] == 9 || str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '\n')
				str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}			
