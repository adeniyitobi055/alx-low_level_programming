#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s);
		_putchar('\n');
		_putchar(s[i]);
	}
}
