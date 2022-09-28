#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int i, l;

	i = strlen(s) / 2;
	l = strlen(s);

	if (s[i] == s[l - i - 1])
		return (1);
	return (0);
}
