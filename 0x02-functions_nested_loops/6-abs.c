#include "holberton.h"
/**
 * _abs - is a function to find positive or negatives
 * @c: is the parameter that is being tested
 * Return: the absolute value of an int number
 */
int _abs(int c)
{
	int ans;

	if (c >= 0)
	{
	ans = c;
	}
	else
	{
	ans = c * (-1);
	}
	return (ans);
}
