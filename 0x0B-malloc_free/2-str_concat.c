#include "holberton.h"
#include <stdlib.h>
/**
* _strlen - This will count the number of characters from a string
* @s: Parameter
* Return: Will return the number of char
*/

int _strlen(char *s)
{
	char *a = s;

	while (*a)
	{
	++a;
	}
return (a - s);
}
/**
 * str_concat - This will concatenate two strings
 * @s1: First string
 * @s2: Second string
 * Return: a pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int tam1, tam2;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	tam1 = _strlen(s1);
	tam2 = _strlen(s2);

	dest = malloc(sizeof(char) * (tam1 + tam2));

	if (dest == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < tam1; i++)
		{
			dest[i] = s1[i];
		}
		for (j = 0; j <= tam2; j++)
		{
			dest[i + j] = s2[j];
		}
	}
	return (dest);
}
