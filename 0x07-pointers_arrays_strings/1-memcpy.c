#include "holberton.h"
/**
* _memcpy - This function copies a memory area
* @dest: is the destination
* @src: is the source to copy
* @n: is the number of bytes to copy from src to dest
* Return: Will return the destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **ptr;
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	ptr = &dest;
	return (*ptr);
}
