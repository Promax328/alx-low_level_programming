#include "main.h"

/**
 * print_alphabet - displays the alphabets in lowercase
 *
 * Return: void no return value
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}

}
