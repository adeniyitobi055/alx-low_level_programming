#include "main.h"

/**
 * is_prime_number - determine if number is prime or not
 * @n: Integer
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int i;

	i = 0;

	if (n == 1)
	{
		return (0);
	}

	if (i < n)
	{
		if (n % (n - i) == 0)
			return (1);
	}
	return (0);
}
