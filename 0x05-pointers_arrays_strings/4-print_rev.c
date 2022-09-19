#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
