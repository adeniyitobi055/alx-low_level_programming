#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print content of array in reverse.
 *
 * @a: parameter one.
 * @n: parameter two.
 * Return: zero.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		printf("%d", *(a + i));
	}
}
