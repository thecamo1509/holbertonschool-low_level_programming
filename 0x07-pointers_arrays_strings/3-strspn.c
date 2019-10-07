#include "holberton.h"
/**
* _strspn - Function to get the lenght of a prefix substring
* @s: 1st String
* @accept: String to compare
* Return: unsigned int of lenght
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int conteo = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				conteo++;
				break;
			}
			else
			{
				j++;
			}
		}
	if (*(s + i) != *(accept + j))
	{
		break;
	}
	j = 0;
	i++;
	}
	return (conteo);
}
