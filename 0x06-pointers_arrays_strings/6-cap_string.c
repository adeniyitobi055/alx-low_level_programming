#include "main.h"

/**
 * *cap_string - Convert all characters to uppercase.
 *
 * @s: parameter.
 * Return: zero.
 */
char *cap_string(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 65 && *s <= 90)
		{

		}
		else if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (0);
}
