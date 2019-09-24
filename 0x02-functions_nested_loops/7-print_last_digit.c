#include "holberton.h"
/**
 * print_last_digit - is a function to find positive or negatives
 * @c: is the parameter that is being tested
 * Return: the absolute value of an int number
 */
int print_last_digit(int c)
{
	int last;
	int ans;

	if (c >= 0)
	{
	ans = c;
	}
	else
	{
	ans = c * (-1);
	}
	last = ans % 10;
	_putchar('0' + last);
	return (last);
}
