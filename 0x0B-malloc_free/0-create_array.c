#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize
 * it with a specific char
 * @size: positive int denoting the size of the array
 * @c: specific char to initialize it with
 *
 * Return: pointer to he array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}



