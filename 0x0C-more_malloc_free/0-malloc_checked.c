#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size and amout of memory needed
 *
 * Return pointer to allocated memory (success) or 98
 * (failure)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
