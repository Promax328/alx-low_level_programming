#include "main.h"

/**
 * strlen_recursion - determines the length of a string
 * @a: pointer to string
 *
 * Return: the length of the string
 */

int strlen_recursion(char *a)
{
	if (*a == '\0')
		return (0);
	else
		return (1 + strlen_recursion(a + 1));
}


/**
 * checkPalindrome - checks if a string is the same if reversed
 * @c: pointer to string
 *
 * Return: 1 if true otherwise 0
 */

int checkPalindrome(char *c, int end, int start)
{
	if (start >= end && c[start] == c[end])
		return (1);

	else if (c[start] != c[end])
		return (0);

	else
		return (checkPalindrome(c, end - 1, start + 1));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to string
 *
 * Return: 1 is true otherwise 0
 */

int is_palindrome(char *s)
{
	int start = 0, end = strlen_recursion(s) - 1;

	return (checkPalindrome(s, end, start));
}
