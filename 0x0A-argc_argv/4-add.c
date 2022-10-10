#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds postive numbers
 * @argc: count of arguements passed
 * @argv: pointer to array of arguements
 *
 * Return: success (EXIT_SUCCESS) otherwise
 * failure (EXIT_FAILURE)
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			/*loops through each string in each element*/
			/*similar to a 2d array and checks if is digits*/

			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Erorr\n");
					exit(EXIT_FAILURE);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);
}
