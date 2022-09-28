#include "main.h"

/**
 * _pow_recursion - Returns the value of a number
 * raised to the power of another number (x ** y).
 * @x: Base integer.
 * @y: Power integer.
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x* (_pow_recursion(x, y - 1)));
}
