#include "main.h"

/**
 * print_to_98 - print all natural numbers
 *
 * @n: parameter
 * Return: Always 0
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
}
