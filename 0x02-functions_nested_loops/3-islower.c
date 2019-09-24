#include <ctype.h>
/**
 * _islower - Is a function to detect lowercases
 * @c: is the parameter that is being tested
 * Return: 1 if it is lowercase
 */
int _islower(int c)
{
	int ans;

	if (c >= 'a' && c <= 'z')
	{
	ans = 1;
	}
	else
	{
	ans = 0;
	}
	return (ans);
}
