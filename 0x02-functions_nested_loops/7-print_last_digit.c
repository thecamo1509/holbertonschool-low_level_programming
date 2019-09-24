#include "holberton.h"
/**
 * print_last_digit - is a function to find positive or negatives
 * @c: is the parameter that is being tested
 * Return: the absolute value of an int number
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
	last = last * (-1);
	}
	_putchar(last + '0');
	return (last);
}
