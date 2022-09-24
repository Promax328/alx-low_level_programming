#include "main.h"

/**
 * puts2 - prints every other character of a 
 * string starting with the first character
 * @str: pointer to the str
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++, i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
