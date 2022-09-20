#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of a string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int w, x, y, z;

	w = string_length(str) /2;

	if (string_length(str) % 2 == 0)
	{
		for (y = w; y < string_length(str); y++)
		{
			_putchar(str[y]);
		}
	}
	else if (string_length(str) % 2 != 0)
	{
		x = (string_length(str) - 1) / 2;
		for (z = x; z <= string_length(str); z++)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}

/**
 * string_length - finds the length of a string.
 * Return: length of c.
 * @pointer: pointer.
 */
int string_length(char *arrow)
{
	int a = 0;

	while (*(arrow + a) != '\0')
	{
		a++;
	}
	return (a);
}
