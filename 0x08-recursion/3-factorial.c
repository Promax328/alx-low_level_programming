#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to get factorial for
 *
 * Return: -1 is n is less than 0 or 1 if n is equal to 0 or 
 * the factorial of the n if greater than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}


