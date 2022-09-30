#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a specified character in a string
 * @s: pointr to string to search for character
 * @c: charater to locate
 *
 * Return: first occurrence of the character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *) s;
		s++;
	}

	return ('\0');
}
