#include "holberton.h"
/**
* _memset - Is a function that will have a constant byte
* @s: is the memory where we are pointing
* @b: is the constant byte
* @n: is the number of bytes in the s memory
* Return: Will return a pointer to the memory address of s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char **ptr; 
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	ptr = &s;
	return (*ptr);
}
