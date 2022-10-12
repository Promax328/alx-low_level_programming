#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements of the array
 *
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int i, tempval;

	for (i = 0; i < (n / 2); i++)
	{
		tempval = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tempval;
	}
}
