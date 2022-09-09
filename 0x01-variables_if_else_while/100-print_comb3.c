#include <stdio.h>

/**
 * main - print from 00 to 99
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '99'; i++)
	{
		for (j = '0'; j <= '99'; i++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
