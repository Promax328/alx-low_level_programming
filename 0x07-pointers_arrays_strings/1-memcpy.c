#include "main.h"

/**
 * _memcpy - copies certain bytes of memory area to another memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
