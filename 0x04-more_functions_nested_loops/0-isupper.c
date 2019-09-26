#include "holberton.h"
/**
* _isupper - Is a function to detect if the paramter is an uppercase
* @c: is the parameter to be tested
* Return: it will return 1 if the letter is an upper or 0 if it is not
*
*/

int _isupper(int c)
{
	int ans;

	if (c >= 'A' && c <= 'Z')
	{
	ans = 1;
	}
	else
	{
	ans = 0;
	}
	return (ans);
}
