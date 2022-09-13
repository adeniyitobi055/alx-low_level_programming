#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers
 *
 * @n: parameter
 * Return: Always 0
 */
void print_to_98(int n)
{
	for (n = -111; n <= 98; n++)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
