#include <ctype.h>
/**
 * _isalpha - Is a function to detect lowercases
 * @c: is the parameter that is being tested
 * Return: 1 if it is letter
 */
int _isalpha(int c)
{
	int ans;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	ans = 1;
	}
	else
	{
	ans = 0;
	}
	return (ans);
}
