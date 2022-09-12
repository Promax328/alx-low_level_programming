#include <stdio.h>

/**
 * main - displays numbers 0 to 9 with commas in between
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int o;

	for (o = '0'; o <= '9'; o++)
	{
		putchar(o);

		if (!(o == '9'))
		{
			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
