#include "holberton.h"
/**
 * print_sign - is a function to find positive or negatives
 * @n: is the parameter that is being tested
 * Return: 1 if it is lowercase
 */
int print_sign(int n)
{
	int ans;

	if (n > 0)
	{
	_putchar('+');
	ans = 1;
	}
	else if (n == 0)
	{
	_putchar('0');
	ans = 0;
	}
	else
	{
	_putchar('-');
	ans = -1;
	}
	return (ans);
}
