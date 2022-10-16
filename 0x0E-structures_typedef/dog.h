#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds information for dogs and it owners
 * @name: string for name of dog
 * @age: float for age of the dog
 * @owner: string for name of owwner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
