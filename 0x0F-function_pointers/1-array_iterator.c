#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function.
 * @array: array elements.
 * @size_t size - array size.
 * @action: function pointer.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
