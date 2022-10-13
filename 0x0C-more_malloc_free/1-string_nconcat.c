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
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (k = 0; k <= n; k++)
		ptr[i + k] = s2[k];
	if (ptr[i + k] != '\0')
		ptr[i + k] = '\0';
	return (ptr);
}
