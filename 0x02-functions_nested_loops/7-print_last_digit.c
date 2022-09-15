#include "main.h"

/**
 * print_last_digit - displays the last the digit of a number
 * @b: the number to check
 *
 * Return: the last digit of the number
 */

int print_last_digit(int b)
{
	if (b < '0')
	{
		b = -1 * (b % 10);
		_putchar(b + '0');
		return (b);
	}

	else
	{
		b = b % 10;
		_putchar(b + '0');
		return (b);
	}
}
