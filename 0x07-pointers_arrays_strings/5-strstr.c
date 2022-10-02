#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer main string to look for substring
 * @needle: pointer to substring
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{

			for (k = 0; needle[k] != '\0'; k++)
			{
				if (haystack[i + k] != needle[k])
				{
					break;
				}
			}
			if (needle[k + 1] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
