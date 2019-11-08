#include "holberton.h"
#include <stdio.h>
/**
* flip_bits - gets the number of bits to change from one number to the other
* @n: The first number
* @m: The second number
* Return: 1 if it worked
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = 0;
	unsigned int i = 0;

	tmp = n ^ m;
	while (tmp > 0)
	{
		if (tmp & 1)
		{
			i++;
		}
		tmp = tmp >> 1;
	}
	return (i);
}
