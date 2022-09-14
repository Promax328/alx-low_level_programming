#include "main.h"

/**
 * print_alphabet_x10 - displays thhe alphabets 10 times in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);

		}

		_putchar('\n');

	}

}
