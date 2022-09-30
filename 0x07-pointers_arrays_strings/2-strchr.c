#include "main.h"
#define NULL 0
/**
 * _strchr - locates a specified character in a string
 * @s: pointr to string to search for character
 * @c: charater to locate
 *
 * Return: first occurrence of the character c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
