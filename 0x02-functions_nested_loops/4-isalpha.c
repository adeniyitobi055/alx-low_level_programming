#include "main.h"

/**
 * _isalpha - check for alphabetic alphabet
 *
 * @c: parameter
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
	{
		return (1);
	}
	return (0);
}
