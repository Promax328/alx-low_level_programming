#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string to add second string to
 * @s2: pointer to second string
 *
 * Return: pointer to concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, k, len1, len2;
	char *strCon;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	strCon = malloc(sizeof(char) * (len1 + len2 + 1));

	if (strCon == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		strCon[i] = s1[i];

	for (k = 0; k <= len2; k++)
		strCon[i + k] = s2[k];

	return (strCon);
}
