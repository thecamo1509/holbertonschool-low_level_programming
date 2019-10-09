#include "holberton.h"
/**
 * _pow_recursion - Returns value x to the power of y
 * @x: the base it
 * @y: the power of x
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
