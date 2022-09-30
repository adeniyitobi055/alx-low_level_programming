#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argv: arguments.
 * @argc: number of arguments.
 * @sum: sum of numbers.
 *
 * Return: 0,for error return 1.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
