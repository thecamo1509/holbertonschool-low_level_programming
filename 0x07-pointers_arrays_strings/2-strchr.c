#include "holberton.h"
/**
* _strchr - Function that locates a character in a string
* @s: is the string
* @c: is the character to find
* Return: a pointer
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int o;

	while (*(s + i))
	{
		i++;
	}
	o = 0;
	while (o <= i)
	{
		if (*(s + o) == c)
		{
			s = (s + o);
			break;
		}
		else if (o == i)
		{
			s ='\0';
		}
		o++;
	}
	return (s);
}
