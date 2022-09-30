#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed.
 *
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
