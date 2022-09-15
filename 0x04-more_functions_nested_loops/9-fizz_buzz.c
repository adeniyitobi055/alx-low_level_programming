#include "main"
#include <stdio.h>

/**
 * Fizz-Buzz test -print Fizz for multiples of 3, Buzz for
 * mutiples of 5 and FizzBuzz for both 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else 
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			break;
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
