#include "main.h"

/**
 * *string_toupper - convert lowercase to uppercase.
 *
 * @p: string.
 * Return: zero.
 */
char *string_toupper(char *p)
{
	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
		{
			*p = *p - 32;
		}
		p++;
	}
	return (0);
}
