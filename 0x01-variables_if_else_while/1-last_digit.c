#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - displays the last digit of a value and tells some characteritics
 * about it
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes there */
	printf("Last digit of %d is ", n);
	n %= 10;
	if (n > 5)
		printf("%d and is greater than 5\n", n);
	if (n == 0)
		printf("%d and is 0\n", n);
	if (n < 6 && !(n == 0))
		printf("%d and is less than 6 and not 0\n", n);
	return (0);

}
