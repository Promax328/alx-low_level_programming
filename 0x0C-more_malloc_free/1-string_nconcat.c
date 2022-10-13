#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointrr to string to which second string
 * will be concatenate to
 * @s2: pointer to the second string
 * @n: int indicating the length of s2 to be added to s1
 *
 * Return: pointer to string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*finds length for s1*/
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	/*finds length for s2*/
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	/*allocate memory based on len1, n and any extra*/
	/* 1 for '\0' */
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	/* test if malloc is NUUL*/
	if (ptr == NULL)
		return (NULL);
	/*assign s1 to ptr excluding '\0' */
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	/* assign s2 to ptr based on n */
	/* and without '\0' */
	for (k = 0; k < n; k++)
		ptr[i + k] = s2[k];
	/*assign '\0' to ptr at the end of the memory*/
	ptr[i + k] = '\0';
	return (ptr);
}
