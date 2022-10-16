#include "dog.h"
#include <stdlib.h>
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
	/*check if it is not yet allocated memory*/
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

