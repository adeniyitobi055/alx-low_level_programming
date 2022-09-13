#include "main.h"

/**
 * print_times_table - times table
 *
 * @n: integer
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i;
	int j;i

	do
	{
		if ((n < 0) && (n > 15))
			return (0);
	}
	while ((n < 0) && (n > 15));

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
	}
	_putchar('\n');
	return (0);
}
