#include "main.h"
#define NULL 0
#include <stdio.h>
/**
 * _strchr - locates a specified character in a string
 * @s: pointr to string to search for character
 * @c: charater to locate
 *
 * Return: first occurrence of the character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
