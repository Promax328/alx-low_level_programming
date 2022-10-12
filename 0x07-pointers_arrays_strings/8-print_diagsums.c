#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointrer to int array
 * @size: int that specifies the size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, priSum = 0, secSum = 0;

	for (i = 0; i < size; i++)
	{
		/*accesses the elements in the first 1D of the 2D array*/
		/* i reps the column for each for each row*/
		priSum += a[i];

		secSum += a[size - 1 - i];
		/*changes from one row(1D of the 2D) to another*/
		a += size;
	}

	printf("%d, %d\n", priSum, secSum);
}

