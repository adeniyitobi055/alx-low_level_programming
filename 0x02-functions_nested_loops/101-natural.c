#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int max = 1024;
	int sum = 0;
	int n;

	for (n = 3; n < max; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
		printf(sum);		
	}
}
