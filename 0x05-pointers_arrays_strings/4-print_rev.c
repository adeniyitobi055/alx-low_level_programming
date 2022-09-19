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

	for (i = 100; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
