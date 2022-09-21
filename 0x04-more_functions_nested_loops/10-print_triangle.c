#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: determines the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, cter = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < cter)
					_putchar(' ');
				else
					_putchar('#');
			}

			cter--;
			_putchar('\n');
		}
	}

}
