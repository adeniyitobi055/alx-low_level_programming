#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function to prints a name.
 * @name: character to be printed.
 * @f: function pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
