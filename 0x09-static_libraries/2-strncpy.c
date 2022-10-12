#include "main.h"

/**
 * _strncpy - copies a string to another
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of byte to copy from src
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}


