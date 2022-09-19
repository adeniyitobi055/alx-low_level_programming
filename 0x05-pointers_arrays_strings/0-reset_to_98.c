#include <stdio.h>

/**
 * reset_to_98 - rest value to 98
 * @n: value to be rest to
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	printf("n: %ls\n", *n);
	reset_to_98(n);
	print("n: %ls\n", *n);
	return (0);
}
