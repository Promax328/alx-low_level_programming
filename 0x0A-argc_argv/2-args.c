#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguements it receives
 * @argc: counts of all arguments passed
 * @argv: pointer to array of argurments passed
 *
 * Return: always success (EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
