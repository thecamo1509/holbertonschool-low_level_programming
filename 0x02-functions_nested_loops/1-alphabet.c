#include "holberton.h"
/**
 * This will create the alphabet in lowercase from a to z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
