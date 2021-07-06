#include "holberton.h"

/**
 * leet-Encodes a string into 1337
 * @str: pointer to string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *str)
{
	char in[] = {'a', 'e', 'l', 'o', 't', 'A', 'E', 'L', 'O', 'T'};
	char out[] = {'4', '3', '1', '0', '7', '4', '3', '1', '0', '7'};
	int i = 0;
	int j = 0;

	while (str[i] != 0)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == in[j])
				str[i] = out[j];
		i++;
	}
	return (str);
}
