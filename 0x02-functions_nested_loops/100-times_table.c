#include "main.h"

/**
 * print_times_table - times table
 *
 * @n: integer
 * Return: Always 0
 */
void times_table(int n)
{
	int i;
	int j;

	do
	{
		printf(
		if ((n < 0) && (n > 15))
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
}
