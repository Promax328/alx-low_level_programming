#include <unistd.h>

/**
 * main - Displys a string to standard error
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
