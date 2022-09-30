#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 *
 * @argv: argument vector.
 * @argc: argument count.
 *
 * Return: 0, 1 for error.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9')
					|| argv[i][j] == 45))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
