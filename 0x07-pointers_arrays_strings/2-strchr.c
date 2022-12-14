#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 *
 * Return: a pointer to character c or Null
 * if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			break;
		}
		s++;
	}
	return (0);
}
