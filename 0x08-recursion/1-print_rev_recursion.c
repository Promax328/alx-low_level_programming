#include "main.h"

/**
 * _print_rev_recursion - prints a string i reverse using recursion
 * @s: pointer to string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s !=  '\0')
	{
		/*calls the next element in the string while the first element waits*/
		/* in the stack thats how each element in the string is called till it*/
		/* gets to the null value then from the stack the last elment is printed*/
		/* first to the very first element*/
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
