#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;

	char tempS;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < (i / 2); j++)
	{
		tempS = s[j];
		s[j] = s[i -j -1];
		s[i -j -1] = tempS;
	}
}
