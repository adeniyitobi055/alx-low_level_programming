#include "main.h"
#include <unistd.h>

/**
 * _putchar - check the code
 *
 * @str: parameter
 * Return: Always 0.
 */
int _putchar(char *str)
{
	return (write(1, &(*str), 1));
}
