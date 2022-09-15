#include "main.h"

/**
 * more_numbers - Print numbers 0 to 14 10 times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
