#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimuim integer in the array
 * @max: maximuim integer in the array
 *
 * Return: pointer to newly created array or NULL
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++, min++)
		ptr[i] = min;

	return (ptr);
}
