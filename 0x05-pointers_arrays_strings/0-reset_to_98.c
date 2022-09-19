#include <stdio.h>

/**
 * reset_to_98 - rest value to 98
 * @n: value to be rest to
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	n = 402;
	printf("n: %d\n", n);
	reset_to_98(n);
	print("n: %d\n", n);
	return (0);
}
