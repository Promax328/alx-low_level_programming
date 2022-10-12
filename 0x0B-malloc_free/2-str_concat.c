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

	/*checks if any given string is NULL*/
	/*replaces it with an empty string*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*gets string length for s1*/
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	/*gets string length for s2*/
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/*allocates enough space for s1, s2 and '\0'*/
	strCon = malloc(sizeof(char) * (len1 + len2 + 1));
	/*test if malloc is NULL*/
	if (strCon == NULL)
		return (NULL);
	/*fills strCon with the elements of s1*/
	/*excluding '\0'*/
	for (i = 0; s1[i] != '\0'; i++)
		strCon[i] = s1[i];
	/*fills strCon with s2 and '\0'*/
	for (k = 0; k <= len2; k++)
		strCon[i + k] = s2[k];

	return (strCon);
}
