#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: string for name element in struct dog
 * @age: value for age element in struct dog
 * @owner: string for owner element in struct dog
 *
 * Return: pointer to the new variable of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	/*allocate space for it and checks*/
	/*if it falls*/
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
