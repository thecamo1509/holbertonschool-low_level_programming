#include "holberton.h"
#include "holberton.h"
/**
 * _pow_recursion - Returns value x to the power of y
 * @x: the base it
 * @y: the power of x
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
/**
* _strlen - This will count the number of characters from a string
* @s: Parameter
* Return: Will return the number of char
*/

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
return (i);
}
/**
 * _atoi - Converts char to unsigned int
 * @s: char to convert
 * Return: char converted to number
 */

int _atoi(const char *s)
{
	int b = 0, c, signo = 0, f = 0;
	unsigned int e = 0;

	while (s[b] != '\0')
	{
		c = s[b];
		if (c == 45)
		{
			signo = signo * (-1);
		}
		if (c >= 48 && c <= 57)
		{
			c = s[b] - 48;
			if (e == 0)
			{
			e = c;
			}
			else
			{
			e = (e * 10) + c;
			++f;
			}
		}
		else if (f > 0)
		{
			break;
		}
	++b;
	}
	e = e * signo;
	return (e);
}
/**
 * binary_to_uint - This function converst binary to an unsigned int
 * @b: pointer to a string of binaries
 * Return: the converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, num, sum = 0, tam, pos;

	if (b == NULL)
	return (0);

	tam = _strlen(b);

	for (pos = (tam - 1); n < tam; pos--, n++)
	{
		if (b[pos] != '1' && b[pos] != '0')
		return (0);
		if (b[pos] == '1')
		{
			num = _pow_recursion(2, n);
			sum += num;
		}
	}
	return (sum);
}
