#include "main.h"
#include <string.h>

/**
 * wildcmp - compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);

	if (s1[i] == s2[i])
		return (1);
	return (0);
}
