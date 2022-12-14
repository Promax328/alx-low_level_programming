#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination to catenate to
 * @src: source to catenate from to destination
 * @n: number of byte to catenate from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, k;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[len1 + k] = src[k];
	}
	dest[len1 + k] = '\0';

	return (dest);
}
