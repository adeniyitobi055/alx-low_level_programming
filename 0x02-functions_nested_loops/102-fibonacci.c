#include <stdio.h>

/**
 * main - fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int n3;
	int n;

	for (n = '3'; n <= 50; n++)
	{
		putchar(n1);
		putchar(n2);
		n3 = n1 + n2;
		putchar(n3);

		n1 = n2;
		n2 = n3;
	}
	return (0);
}
