#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of a string
 *
 * @str: string
 * @n: parameter
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, n, m;

	m = strlen(str) / 2;
	if (strlen(str) % 2 == 0)
	{
		for (i = strlen(str) / 2; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (strlen(str) % 2 != 0)
	{
		n = (strlen(str) - 1) / 2;
		for (j = n; j <= strlen(str); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
