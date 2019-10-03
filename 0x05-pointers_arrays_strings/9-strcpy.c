#include "holberton.h"
/**
 * _strcpy - Function to copy strings
 * @dest: Destiny
 * @src: Source
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (src[p])
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
		return(dest);
}
