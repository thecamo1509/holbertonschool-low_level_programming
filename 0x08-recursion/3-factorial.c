#include "holberton.h"
/**
 * factorial - Returns the factorial
 * @n: The number to make the factorial
 * Return: The answer of the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
