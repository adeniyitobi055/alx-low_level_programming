#include <stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int n3;
	int n;

	for (n = 3; n <= 50; n++)
	{
		putchar(n1);
		putchar(n2);
		n3 = n2 + n1;

		n1 = n2;
		n2 = n3;
		putchar('0' + n / 10);
		putchar('0' + n % 10);
	}
	putchar('\n');
	return (0);
}
