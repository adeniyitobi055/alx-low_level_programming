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

	for (i = 0; i <= 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			putchar(ij);
			if (i == j)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
