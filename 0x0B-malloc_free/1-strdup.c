#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Is a function to return a pointer
 * @str: The string to copy
 * Return: a pointer to a new allocated space
 */

char *_strdup(char *str)
{
	 int tam = 0;
	 int j;
	 char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[tam] != '\0')
	{
		tam++;
	}
	tam++;
	dest = malloc(sizeof(char) * tam);
	if (dest == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < tam)
	{
		dest[j] = str[j];
		j++;
	}
	return (dest);
}
