#include <stdio.h>
#include  <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: count of arguements passed
 * @argv: pointer to array of argurments passed
 *
 * Return: success if 2 arguements are entered
 * (EXIT_SUCCESS) otherwie failure (EXIT_FAILURE)
 */

int main(int argc, char **argv)
{
	if (argc <= 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	else
	{
		int i, product = 1;

		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}

		printf("%d\n", product);

		exit(EXIT_SUCCESS);
	}
}
