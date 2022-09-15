#include "main.h"

/**
 * print_square - print a square
 * @size: parameter
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		if (i == size)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
