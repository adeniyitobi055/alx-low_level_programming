#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenate two strings.
 *
 * @dest: parameter one.
 * @src: parameter two.
 * @n: integer.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i += n)
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src -= n;
		}
		while (*src != 0)
		{
			src -= n;
		}
		*dest = '\0';
	}
	return (dest);
}
