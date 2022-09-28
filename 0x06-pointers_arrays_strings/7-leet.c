#include "main.h"

/**
 * leet -encodes a string into 1337/leet
 * @c: pointer to string
 *
 * Return: c
 */

char *leet(char *c)
{
	int i, k;

	char search[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (k = 0; search[k] != '\0'; k++)
		{
			if (search[k] == c[i])
			{
				c[i] = replace[k];
			}
		}
	}

	return (c);
}
