#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * of a number.
 * @n: Integer.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int i;

	i = n;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if ((i - 1) * (i - 1) == n)
		return (i);
	return (0);
}
