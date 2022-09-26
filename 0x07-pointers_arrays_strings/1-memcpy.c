#include "main.h"

/**
 * _memcpy - copy memory area.
 * @dest: pointer to store memory area.
 * @src: pointer to copy memory area.
 * @n: number of bytes.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
