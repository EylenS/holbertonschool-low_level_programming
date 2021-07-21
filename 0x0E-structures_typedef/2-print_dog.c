#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - prints a struct dog
 * @d: pointer which points to &my_dog
 *
 * Return, a struct dog printed to main function
 * On error, void function
 */
void print_dog(struct dog *d)
{
	void init_dog(struct dog *d, char *name, float age, char *owner);
	printf("Name: %s\n", (*d).name);
	printf("Age: %.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
