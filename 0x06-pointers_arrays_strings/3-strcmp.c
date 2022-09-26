#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to one char to be compared
 * @s2: pointer to the second char to be compared
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, k;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		;

	if (i > k)
		return (15);

	else if (i < k)
		return (-15);

	else
		return (0);
}
