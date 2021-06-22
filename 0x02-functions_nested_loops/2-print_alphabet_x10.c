#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (l = 97; l <= 122; l++)
			_putchar(l);
		_putchar('\n');
	}
}
