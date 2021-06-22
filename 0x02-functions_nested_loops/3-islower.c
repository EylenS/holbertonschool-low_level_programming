#include <unistd.h>
#include "holberton.h"

/**
 * _islower - writes the character is in lowercase to stdout
 *@c : The character to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
