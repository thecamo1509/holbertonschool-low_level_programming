#include "holberton.h"
/**
 * set_bit - Add a bit at an Index
 * @n: The number
 * @index: The index
 * Return: the converted number or 0 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	return (-1);
	*n = *n | (1 << index);
	return (1);
}
