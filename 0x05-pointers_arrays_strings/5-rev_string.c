#include "holberton.h"
/**
* rev_string - Function that reverses any string
* @s: is the parameter
* Return: no return
*/

void rev_string(char *s)
{
	char i;
	char *save1 = s;
	char *save2 = s;

	while (*(save2 + 1) != ('\0'))
	{
	save2++;
	}
	while (*save1 < *save2)
	{
	i = *save1;
	*save1 = *save2;
	*save2 = i;
	save1++;
	save2--;
	}
}
