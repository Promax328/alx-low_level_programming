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
	int i, l, *ptr;

	if (min > max)
		return (NULL);

	/* gets the actual length of the array*/
	l = max - min + 1;

	ptr = malloc(sizeof(int) * l);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++, min++)
		ptr[i] = min;

	return (ptr);
}
