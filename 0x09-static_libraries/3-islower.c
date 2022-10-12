#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: char type character
 *
 * Return: 1 if successful otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
