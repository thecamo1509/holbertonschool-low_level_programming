#include "holberton.h"
/**
* _isdigit - is a function to check if it is a digit or not
* @c: is the parameter to be tested
* Return: 1 if it is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	int ans;

	if (c >= '0' && c <= '9')
	{
	ans = 1;
	}
	else
	{
	ans = 0;
	}
	return (ans);
}
