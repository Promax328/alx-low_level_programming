#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array  of integers
 * @width: pointer to int for row of array
 * @height: pointer to int for cloumn of array
 *
 * Return: pointer to 2d array or NULL
 */

int **alloc_grid(int width, int height)
{
	/*since is a double pointer function it will*/
	/*return a double pointer so **ptr*/
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*ptr is a double pointer meaning it stores the address*/
	/*of a pointer the size to be allocated must be the size*/
	/*of a pointer so (int *)*/
	/* ptr is created, allocated size based on the row but is*/
	/*is meant to store address to memory blocks where our*/
	/*actual integers can be stored*/
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	/*we then create a loop to loop through each block of **ptr*/
	for (i =  0; i < height; i++)
	{
		/* each block is then allocated a memory able to store*/
		/* the actual integer we wish to store*/
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			/*to free up the memory*/
			for (i = 0; i < height; i++)
				free(ptr[i]);
			return (NULL);
		}
	}
	/*to  assign values we loop twice*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
