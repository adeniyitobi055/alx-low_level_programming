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

	if (strlen(str) % 2 == 0)
	{
		m = string_length(str) / 2;
		for (i = m; i < string_length(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (strlen(str) % 2 != 0)
	{
		n = (string_length(str) - 1) / 2;
		for (j = n; j <= string_length(str); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
