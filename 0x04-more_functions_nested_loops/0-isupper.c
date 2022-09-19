#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: intger to be tested
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
