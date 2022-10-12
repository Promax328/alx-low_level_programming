#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a
 * parameter
 * @str: pointer to a string
 *
 * Return: pointer ot the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int len, k;
	char *s;

	if (*str == '\0')
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);

	for (k = 0; k < len; k++)
		s[k] = str[k];

	return (s);
}
