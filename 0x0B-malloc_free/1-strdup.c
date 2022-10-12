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

	/*check if the str is NULL*/
	if (str == NULL)
		return (NULL);

	/*gets the length of the given string*/
	for (len = 0; str[len] != '\0'; len++)
		;

	/*allocates a space for the duplicate*/
	/*string base on the length of str*/
	s = malloc(sizeof(char) * len + 1);

	/*checks if malloc is NULL*/
	if (s == NULL)
		return (NULL);

	for (k = 0; k < len; k++)
		s[k] = str[k];

	return (s);
}
