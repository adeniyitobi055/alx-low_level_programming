#include "main.h"

/**
 * more_numbers - Print numbers 0 to 14 10 times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <=14; j++)
			_putchar(j);
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
