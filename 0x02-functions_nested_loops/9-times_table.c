#include "main.h"

/**
 * times_table - displays the 9 times table starting from 0
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			if (k <= 9)
			{
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}

			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

		}

		_putchar('\n');

	}

}
