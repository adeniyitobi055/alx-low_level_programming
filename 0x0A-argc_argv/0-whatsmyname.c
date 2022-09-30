#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints it name.
 *
 * @argc: number of characters.
 * @argv: characters.
 *
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
