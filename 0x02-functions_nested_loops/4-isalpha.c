#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to check
 *
 * Return: on success 1 otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
