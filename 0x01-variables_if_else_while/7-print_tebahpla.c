#include <stdio.h>

/**
 * main - displays lower case alphabetsb in reverse order
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char z_a;

	for (z_a = 'z'; z_a >= 'a'; z_a--)
	{
		putchar(z_a);

	}

	putchar('\n');

	return (0);
}
