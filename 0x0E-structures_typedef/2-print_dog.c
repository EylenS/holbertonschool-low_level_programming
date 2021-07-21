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
	if (d != NULL)
	{
		void init_dog(struct dog *d, char *name, float age, char *owner);
		printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		(*d).name = "(nil)";
	else
		(*d).name = name;
	if (age <= 0)
		(*d).age = 0;
	else
		(*d).age = age;
	if (owner == NULL)
		(*d).owner = "(nil)";
	else
		(*d).owner = owner;
}
