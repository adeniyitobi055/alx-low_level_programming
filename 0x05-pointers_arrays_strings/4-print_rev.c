#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 *
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
