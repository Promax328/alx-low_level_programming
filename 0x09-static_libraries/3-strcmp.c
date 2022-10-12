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
	int i, result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
	}

	return (0);
}
