#include "holberton.h"
/**
 * string_toupper - Function to upper
 * @p: parameter I want
 * Return: will return a chart
 */

char *string_toupper(char *p)
{
	int i = 0;
	int s = 0;

	while (p[i] != '\0')
	{
		i++;
	}
	while (s < i)
	{
		if (p[s] >= 97 && p[s] <= 122)
		{
			p[s] = p[s] - 32;
		}
		else
		{}
		s++;
	}
	return (p);
}
