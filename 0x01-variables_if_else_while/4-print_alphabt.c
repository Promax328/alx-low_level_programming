#include <stdio.h>

/**
 * main - displays alphabets in lower case expect e and q
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (!(t == 'e') && !(t == 'q'))
			putchar(t);
	}
	putchar('\n');

	return (0);
}
