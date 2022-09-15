#include "main.h"

/**
 * print_last_digit - displays the last the digit of a number
 * @b: the number to check
 *
 * Return: the last digit of the number
 */

int print_last_digit(int b)
{
	int p;

	if (b < 0)
	{
		p = -1 * (b % 10);
		_putchar(p + '0');
		return (p);
	}

	else if (b >= 0)
	{
		p = b % 10;
		_putchar(p + '0');
		return (p);
	}
}
