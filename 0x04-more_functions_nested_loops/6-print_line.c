#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number of times to print _.
 */

void print_line(int n);
{
	if (n > 0)
	{
		_putchar('_');
		n--;
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
