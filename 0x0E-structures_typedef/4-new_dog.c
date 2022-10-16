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
	int l1, l2, i;
	dog_t *new;

	for (l1 = 0; name[l1] != '\0'; l1++)
		;
	for(l2 = 0; owner[l2] != '\0'; l2++)
		;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(dog_t) * l1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		new->name[i] = name[i];

	new->owner = malloc(sizeof(dog_t) * l2);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		new->owner[i] = owner[i];
	new->age = age;

	return (new);
}
