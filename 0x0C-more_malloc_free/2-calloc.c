#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for array using calloc.
 * @nmemb: elements of an array.
 * @size: number of elements in array.
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, j;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(j);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		p[i] = 0;
	return (p);
}
