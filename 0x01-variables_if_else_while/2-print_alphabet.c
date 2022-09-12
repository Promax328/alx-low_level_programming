#include <stdio.h>

/**
 * main - displays the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		putchar(a_z);
	}

	putchar('\n');

	return (0);
}
