#include "holberton.h"
#include <stdlib.h>

/**
* _strlen - This will count the number of characters from a string
* @s: Parameter
* Return: Will return the number of char
*/

unsigned int _strlen(char *s)
{
	unsigned int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
return (a);
}
/**
 * string_nconcat - Concatenates two strings
 * @s1: First String
 * @s2: Second String
 * @n: Number of bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int tam1, tam2, i, j;
	char *p;

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
	if (n >= tam2)
	{
		n = _strlen(s2);
	}
	p = malloc(sizeof(char) * (tam1 + n) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < tam1; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			p[i + j] = s2[j];
		}
		p[i + j] = '\0';
	return (p);
}
