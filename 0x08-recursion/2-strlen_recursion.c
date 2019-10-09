#include "holberton.h"
/**
 * _strlen_recursion - Counts the lenght of a string
 * @s: The string to take in mind
 * Return: an int with the counting
 */

int _strlen_recursion(char *s)
{	
	if (*s == '\0')
	{
		return(0);
	}
	return (1 + _strlen_recursion (s+ 1));
}
