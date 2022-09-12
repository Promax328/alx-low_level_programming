#include <stdio.h>
/**
 * main - Displays all numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int p;
	char r;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
	}

	for (r = 'a'; r <= 'f'; r++)
	{
		putchar(r);
	}

	putchar('\n');

	return (0);
}
