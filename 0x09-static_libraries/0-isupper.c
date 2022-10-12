#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: intger to be tested
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
