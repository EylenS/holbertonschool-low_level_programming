#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: pointer
 *
 * Return: type void.
 * On error, none
 */
void free_dog(dog_t *d)
{
	free(d);
}
