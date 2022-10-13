#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc & free
 * @ptr: pointer to memory block
 * @old_size: previous size of memory block
 * @new_size: new size for memory block
 *
 * Return: pointer to new memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2, *ptr1 = ptr;
	unsigned int i;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size && ptr != NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			ptr2[i] = ptr1[i];
		free(ptr);
	}
	return (ptr2);
}
