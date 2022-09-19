#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string pointed to by src.
 *
 * @dest: pointer to the buffer.
 * @src: pointer to the source string.
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
