#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s:string to be searched.
 * @accept: string containing bytes.
 *
 * Return: a pointer to the byte s.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			break;
		}
		s++;
		accept++;
	}
	return (s);
}
