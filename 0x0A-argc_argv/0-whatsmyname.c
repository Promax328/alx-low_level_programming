#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its  program name, followed by a new line
 * @argc: count of the number of arguments entered
 * @argv: pointer to an array of strings pointers
 *
 * Return: always success (EXIT_SUCCESS)
 */

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
