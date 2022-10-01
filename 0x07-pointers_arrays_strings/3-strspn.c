#include "main.h"

/**
 * _strspn - gets the number of bytes elements in the first
 * string is found in the second string
 * @s: pointer to string to check for
 * @accept: pointer to string to check in
 *
 * Return: the number of bytes in the initial segement of s found in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for  (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				break; /*stops the inner loop returns to the main loop*/
			}

			else if (accept[j + 1] == '\0')
				return (counter);
		}

	}
	return (counter);
}
