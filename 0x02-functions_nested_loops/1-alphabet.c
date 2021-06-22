#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet - writes the alphabet to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
		_putchar(letter);
	_putchar ('\n');
}
