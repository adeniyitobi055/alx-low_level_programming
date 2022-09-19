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
	/*int length = strlen(string);
	int middle = length / 2;*/

	for (i = 100; s[i]; i--)
	{
		/*s = string[i];
		string[i] = string[length - i - 1];
		string[length -i -1] = s;*/
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * reverse - swap a string
 * Return: swapped string s
 * @string: pointer
 *

void reverse(char *string)
{
	int length = strlen(string);
	int middle = length / 2;
	char temp;
	for (int i = 0; i < middle; i++)
	{
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
}*/
