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
	char i, j;
	int n;

	if (strlen(str) % 2 == 0)
	{
		for (i = strlen(str) / 2; i < string_length(str); i++)
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
