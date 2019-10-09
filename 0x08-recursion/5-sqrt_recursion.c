#include "holberton.h"
/**
 * funcion1 - find the sqrt
 * @i: Its the one to pow
 * @x: Its n
 * Return: The natural square root
 */

void funcion1(int *i, int x)
{
	if ((*i) * (*i) == x)
	{
	return;
	}
	if ((*i) * (*i) < x)
	{
	*i = *i + 1;
	funcion1(i, x);
	}
}
/**
 * _sqrt_recursion - Returns a natural square of a number
 * @n: The base
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	int a = 2;
	int *i = &a;

	funcion1(i, n);
	a = *i;
	if (n == 1)

	{
		return (1);
	}
	if ((*i) * (*i) != n)
	{
		return (-1);
	}
	return (a);
}
