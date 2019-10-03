#include "holberton.h"
#include <stdio.h>
/**
* _strcat - This function will concatenate two strings
* @dest: Will receive the two strings
* @src: Will be the source of
* Return: Will return a char which is the dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';

	return (dest);
}
