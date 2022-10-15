#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to variable of type dog
 * @name: string to initialize name in structure to
 * @age: value to initialize age in structure to
 * @owner: string to initilize owner in structure to
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}

