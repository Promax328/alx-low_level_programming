#include "main.h"

/**
 * _strcpy - copies strings from one string to another
 * @dest: pointer to where the string is copied to
 * @src: pointer to where tye string is copied from
 *
 * Return: pointer to desk
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	dest[k] = '\0';

	return (dest);
}
