#include "main.h"

/**
 * print_diagonal - print \ n number of times
 * @n: parameter
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i >= 2 && j <= i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		if (i == n)
		{
			break;
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
