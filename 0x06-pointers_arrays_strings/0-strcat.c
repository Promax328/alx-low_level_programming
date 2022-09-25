#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination to concatenate to
 * @src: source to concatenate to destination
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, k;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
		;
	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}

	return (dest);
}
