#include <stdio.h>

/**
 * main - print the numbers from 1 to 100 and reassign specific numbers
 *
 * Description: if the printed numbers are multiples of three, multiples
 * of five and multiples of three and five reassign with
 * fizz, buzz and fizzbuzz respectively
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i %  5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("Buzz\n");

	return (0);
}
