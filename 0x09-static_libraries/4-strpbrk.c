#include "main.h"
#define  NULL 0

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search for set of bytes
 * @accept: string(set of bytes) to look for
 *
 * Return: point to the btye in s that matches one of
 * the bytes in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
				return (&s[i]);
		}
	}

	return (NULL);
}
