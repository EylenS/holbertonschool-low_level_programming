#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates new information
 * @name: pet's name
 * @age: pet's age
 * @owner: owner's name
 *
 * Return: pointer.
 * On error, -1
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (00);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
