#include "main.h"

/**
 * find_sqrt - finds the square root of a number
 * @x: integer number to look for the square root
 * @y: integer number to start the test with
 *
 * Return: -1 if the number has no natural square root,
 * otherwise it returns the natural square root
 */

int find_sqrt(int x, int y)
{
	/*this is a case where x is negative etc*/
	if (y * y > x)
		return (-1);

	else if (y * y == x)
		return (y);

	/*when y * y < x, y is meant to be increased and the test carried out again*/
	else
		return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: intgr numbr to look for its natural squar root
 *
 * Return: -1 is n has no natural square root or
 * its natural square root if it has
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
