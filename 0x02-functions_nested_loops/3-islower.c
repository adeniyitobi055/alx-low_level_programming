#include "main.h"

/**
 * int_islower - check for lowercase character
 *
 * @c: character to be checked
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
