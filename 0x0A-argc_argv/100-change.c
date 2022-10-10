#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimuim number of coins to
 * make change for any amount of money
 * @argc: counts arguements passed
 * @argv: pointer to array of arguements passed
 *
 * Return: success (EXIT_SUCCESS) otherwise
 * failure (EXIT_FAILURE)
 */

int main(int argc, char **argv)
{
	int total, cent = 0;

	if (argc == 2)
	{
		total = atoi(argv[1]);
		while (total > 0)
		{
			if (total >= 25)
			{
				total -= 25;
				cent++;
			}
			else if (total >= 10)
			{
				total -= 10;
				cent++;
			}
			else if (total >= 5)
			{
				total -= 5;
				cent++;
			}
			else if (total >= 2)
			{
				total -= 2;
				cent++;
			}
			else if (total >= 1)
			{
				total -= 1;
				cent++;
			}
		}
		printf("%d\n", cent);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Error\n"), exit(EXIT_FAILURE);
	}
}
