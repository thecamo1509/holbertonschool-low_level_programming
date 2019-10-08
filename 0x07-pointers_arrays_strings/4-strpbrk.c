#include "holberton.h"
/**
 * _strpbrk - A function to search a string for any of a set of bytes
 * @s: Source string
 * @accept: accepted string
 * Return: Will return a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	int i = 0;
	int j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + i))
			{
				s += i;
				*ptr = s;
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
