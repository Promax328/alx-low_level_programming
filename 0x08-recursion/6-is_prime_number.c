#include "main.h"

/**
 * checkPrime - checks if an integer number is prime or not
 * @num: number to check
 * @k: number to run test with
 *
 * Return: 1 if the input integer is a prime number otherwise 0
 */

int checkPrime(int num, int k)
{
	if (num == k)
		return (1);

	else if (num % k == 0)
		return (0);

	/*when  both case above is not true we recall*/
	/*the function with increment in k*/
	else
		return (checkPrime(num, k + 1));
}

/**
 * is_prime_number - server as main function to test checkPrime function
 * @n: integer number to bre checked
 *
 * Return: 1 if the input integer is a prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checkPrime(n, 2));
}
