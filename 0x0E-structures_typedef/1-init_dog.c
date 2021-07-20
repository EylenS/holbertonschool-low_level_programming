#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer which points to &my_dog
 * @name: pet's name
 * @age: pet's age
 * @owner: owner's name
 *
 * Return: pointer.
 * On error, NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
