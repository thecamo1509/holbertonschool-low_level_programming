#include "holberton.h"
/**
 * get_bit - Get a bit from the number
 * @n: The number
 * @index: The index
 * Return: the converted number or 0 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
	return (-1);
	for(i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return(n & 1);
}