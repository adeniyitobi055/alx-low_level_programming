#include "main.h"

/**
 * times_table - print 9 times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			_putchar(',');
			_putchar(' ');
			_putchar(result / 10);
			_putchar(result % 10);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
