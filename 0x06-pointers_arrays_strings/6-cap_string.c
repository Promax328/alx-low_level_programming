#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: pointer to string
 *
 * Return: char c
 */

char *cap_string(char *c)
{
	int k, i;

	char indicator[] = "\t,\n; .!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
		{
			c[0] -= 32;
		}
		
		for (k = 0; indicator[k] != '\0'; k++)
		{
			if (indicator[k] == c[i])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] -= 32;
				}
			}
		}
	}
	return (c);
}
