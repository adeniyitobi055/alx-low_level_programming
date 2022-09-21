#include "main.h"

/**
 * *_strncpy - copy a string
 *
 * @dest: parameter one.
 * @src: parmeter two.
 * @n: integer.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*src != '\0')
	{
		src += n;
	}
	*dest = '\0';
	return (dest);
}
