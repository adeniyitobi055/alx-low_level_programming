#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrix of integers.
 * @a: pointer.
 * @size: size of matrix.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + ((size * i) + i));
	}

	s2 = 0;

	for (i = 1; i <= size; i++)
	{
		s2 += *(a + ((size * i) - i));
	}
	printf("%d, %d\n", s1, s2);
}
