#include "holberton.h"
/**
* _strncat - will concatenate n chars from a string
* @dest: Will be the dest string
* @src: will be the source string
* @n: will be the position in memory from the source
* Return: will return the destiny
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
