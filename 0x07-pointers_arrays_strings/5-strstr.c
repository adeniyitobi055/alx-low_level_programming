#include "main.h"

/**
 * _strstr - locate a substring.
 * @haystack: parent string.
 * @needle: substring.
 *
 * Return: a pointer to the beginning of substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			break;
		}
		haystack++;
	}
	return (haystack);
}
