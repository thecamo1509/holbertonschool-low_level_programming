#include "holberton.h"
/**
 * cap_string - Is a string to capitalize
 * @e: Is the parameter
 * Return: The parameter
 */
char *cap_string(char *e)
{
	int i = 0;

	while (e[i] != '\0')
	{
		if (e[0] >= 97 && e[0] <= 122)
		{
			e[i] = e[i] - 32;
		}
		if (e[i] == 32 || e[i] == 33 || e[i] == 34
		    || e[i] == 9 || e[i] == 10 || e[i] == 40
		    || e[i] == 41 || e[i] == 44 || e[i] == 46
		    || e[i] == 59 || e[i] == 63 || e[i] == 123
		    || e[i] == 125)
		{
			if (e[i + 1] >= 97 && e[i + 1] <= 122)
			{
				e[i + 1] = e[i + 1] - 32;
			}
		}
		i++;
	}
	return (e);
}
