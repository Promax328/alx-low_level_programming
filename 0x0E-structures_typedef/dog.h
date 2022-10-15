#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds information for dogs and it owners
 * @name: string for name of dog
 * @age: float for age of the dog
 * @owner: string for name of owwner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
