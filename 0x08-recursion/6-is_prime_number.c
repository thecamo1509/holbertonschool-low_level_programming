#include "holberton.h"
/**
 * tmpfunc - Function to evaluate divisors
 * @a: Is the number to evaluate
 * @b: Is a number from a to 0
 * Return: 1 if the number is prime and 0 if it is not
 */

int tmpfunc(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else if (b == 1)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (tmpfunc(a, b - 1));
	}
}

/**
 * is_prime_number - Function to know if it is a prime number
 * @n: Is the number to check
 * Return: 1 if it is prime and 0 if it is not
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
		return (tmpfunc(n, n - 1));
}
