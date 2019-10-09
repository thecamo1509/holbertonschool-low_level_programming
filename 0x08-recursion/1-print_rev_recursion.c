#include "holberton.h"
/**
 * _print_rev_recursion - This will print a string in reverse
 * @s: Is the string
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
