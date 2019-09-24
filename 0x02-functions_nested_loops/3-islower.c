#include <ctype.h>
/**
 * _islower - Is a function to detect lowercases
 * c: is the parameter that is being tested
 * Return: 1 if it is lowercase
 */
int _islower(int c)
{
	int ans;

	ans = (islower(c) > 0 ? 1 : 0);
	return (ans);
}
