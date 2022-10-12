#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Displays a random number and tell if its positive, negative or
 *zero
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);

}
