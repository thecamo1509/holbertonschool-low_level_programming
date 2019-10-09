#include "holberton.h"
/**
 * _puts_recursion - Function to prints a string
 * @s: String to be printed
 * Return: no return
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		s++;
		_puts_recursion(s);
	}
	else if (s[i] == '\0')
	{
		_putchar('\n');
	}
}
