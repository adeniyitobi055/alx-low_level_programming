#include <stdio.h>

/**
 * main - print possible cobinations 0-9
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		if (i == '9')
			break;
	}
	putchar('\n');
	return (0);
}
