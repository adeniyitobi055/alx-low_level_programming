#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program.
 * @ac: integer.
 * @av: double pointer to character.
 * Return: a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
	}
	return (str);
}
