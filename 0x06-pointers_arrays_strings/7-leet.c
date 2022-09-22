#include "main.h"

/**
 * leet - encode a string to 1337.
 *
 * @str: string to be encoded.
 * Return: a pointer to the string.
 */
char *leet(char *str)
{
	int i = 0;
	int n;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (n = 0; n <= 7; n++)
		{
			if (str[i] == leet[n] ||
					str[i] - 32 == leet[n])
				str[i] = n + '0';
		}
		i++;
	}
	return (str);
}
