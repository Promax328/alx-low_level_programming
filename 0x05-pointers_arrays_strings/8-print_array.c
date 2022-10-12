#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an integer array
 * @n: numbers of elements to print from the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int  i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				printf("%d, ", a[i]);

			else if (i == (n - 1))
				printf("%d\n", a[i]);
		}
	}

	else
		printf("\n");
}
