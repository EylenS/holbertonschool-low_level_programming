#include "holberton.h"

/**
 * _strstr- finds the 1st occurence of the needle in haystack
 * @needle: The small string to be searched with-in haystack string
 * @haystack: The main string to be scanned
 *
 * Return: a pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		k = 0;
		while (needle[j] != '\0' && j == k)
		{
			if (needle[j] == haystack[j + i])
				k++;
			j++;
		}
		if (k == j)
			return (haystack + i);
		i++;
	}
	return (00);
}
