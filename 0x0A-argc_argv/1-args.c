#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguements  passed to it
 * @argc: count of passed arguements
 * @argv: pointer to string of passed arguements
 *
 * Return: always success (EXIT_SUCCESS)
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
