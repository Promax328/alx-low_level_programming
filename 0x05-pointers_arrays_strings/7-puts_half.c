#include "main.h"

/**
 * puts_half - prints half pf a string
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
	{
		int i, half = len / 2;

		for (i = half; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

		_putchar('\n');
	}

	else
	{
		int k, n = (len - 1) / 2;

		for (k = n; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}

		_putchar('\n');
	}
}
