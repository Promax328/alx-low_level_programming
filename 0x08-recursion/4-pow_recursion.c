#include "main.h"

/**
 * _pow_recursion - returns the value of x raise to the power of y
 * @x: integer of number to be raised to power y
 * @y: integer of number for power
 *
 * Return: -1 if y less than 0, 1 if y is equal to 0,
 * any other posituve value if y is greater than 0\
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
