#include <stdio.h>

/**
 * main - displays numbers from 1 to 9 using putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
	}

	putchar('\n');

	return (0);
}
